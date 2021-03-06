// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIButton;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC4happ21AccountViewController")
@interface AccountViewController : UIViewController
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified logoutButtonTapped;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)logoutButtonTapped:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC4happ11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIBarButtonItem;
@class UINavigationItem;
@class UITextField;
@class UILabel;
@class NSData;

SWIFT_CLASS("_TtC4happ24ChangePassViewController")
@interface ChangePassViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, strong) IBOutlet UIBarButtonItem * _Null_unspecified navBack;
@property (nonatomic, strong) IBOutlet UINavigationItem * _Null_unspecified navTitle;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified userEmailField;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified labelUserEmail;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified userNote;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified btnChangePass;
@property (nonatomic, copy) NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> * _Nonnull changePassparam;
@property (nonatomic, copy) NSString * _Null_unspecified language;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)changePass:(id _Nonnull)sender;
- (NSString * _Nonnull)generateBoundaryString;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (NSData * _Nonnull)createBodyWithParameters:(NSDictionary<NSString *, NSString *> * _Nullable)parameters boundary:(NSString * _Nonnull)boundary;
- (void)displayMyAlertMessage:(NSString * _Nonnull)userMessage;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSMutableData (SWIFT_EXTENSION(happ))
- (void)appendString:(NSString * _Nonnull)string;
@end

@class UIImageView;
@class UISwitch;
@class UIImagePickerController;

SWIFT_CLASS("_TtC4happ18RegisterController")
@interface RegisterController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified userEmail;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified userPassword;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified userName;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified userMessage;
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified imageView;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified browseImage;
@property (nonatomic, strong) IBOutlet UISwitch * _Null_unspecified frontEndSwitch;
@property (nonatomic, strong) IBOutlet UISwitch * _Null_unspecified backEndSwitch;
@property (nonatomic, strong) IBOutlet UISwitch * _Null_unspecified iosSwitch;
@property (nonatomic, strong) IBOutlet UISwitch * _Null_unspecified AndroidSwitch;
@property (nonatomic, strong) IBOutlet UISwitch * _Null_unspecified appdesignSwitch;
@property (nonatomic, strong) IBOutlet UISwitch * _Null_unspecified webdesignSwitch;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)browseImage:(id _Nonnull)sender;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)imagePickerControllerDidCancel:(UIImagePickerController * _Nonnull)picker;
- (IBAction)registerBtn:(UIButton * _Nonnull)sender;
- (void)registerUser;
- (NSString * _Nonnull)generateBoundaryString;
- (NSData * _Nonnull)createBodyWithParameters:(NSDictionary<NSString *, NSString *> * _Nullable)parameters filePathKey:(NSString * _Nullable)filePathKey imageDataKey:(NSData * _Nonnull)imageDataKey boundary:(NSString * _Nonnull)boundary;
- (NSString * _Nonnull)switchButtonCheck:(UISwitch * _Nonnull)switchButton;
- (NSString * _Nonnull)returnSkillValue:(NSDictionary<NSNumber *, NSString *> * _Nullable)parameters;
- (void)displayMyAlertMessage:(NSString * _Nonnull)userMessage;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4happ20SignupViewController")
@interface SignupViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified userEmailField;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified userPasswordField;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified btnLogin;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified labelUserEmail;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified labelPassword;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified forgotPass;
@property (nonatomic, strong) IBOutlet UIBarButtonItem * _Null_unspecified navBack;
@property (nonatomic, strong) IBOutlet UINavigationItem * _Null_unspecified navTitle;
@property (nonatomic, copy) NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> * _Nonnull loginParam;
@property (nonatomic, copy) NSString * _Null_unspecified language;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)loginButton:(id _Nonnull)sender;
- (NSString * _Nonnull)generateBoundaryString;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (NSData * _Nonnull)createBodyWithParameters:(NSDictionary<NSString *, NSString *> * _Nullable)parameters boundary:(NSString * _Nonnull)boundary;
- (void)displayMyAlertMessage:(NSString * _Nonnull)userMessage;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4happ14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn_login;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn_register;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)btn_login:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
