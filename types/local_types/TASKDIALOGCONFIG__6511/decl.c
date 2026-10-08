struct _TASKDIALOGCONFIG
{
UINT cbSize;
__unaligned __declspec(align(1)) HWND hwndParent;
__unaligned __declspec(align(1)) HINSTANCE hInstance;
TASKDIALOG_FLAGS dwFlags;
TASKDIALOG_COMMON_BUTTON_FLAGS dwCommonButtons;
__unaligned __declspec(align(1)) PCWSTR pszWindowTitle;
__unaligned __declspec(align(1)) $E63FB5858918334CEF73A6F29107BEB1 u;
__unaligned __declspec(align(1)) PCWSTR pszMainInstruction;
__unaligned __declspec(align(1)) PCWSTR pszContent;
UINT cButtons;
const TASKDIALOG_BUTTON *pButtons;
int nDefaultButton;
UINT cRadioButtons;
const TASKDIALOG_BUTTON *pRadioButtons;
int nDefaultRadioButton;
__unaligned __declspec(align(1)) PCWSTR pszVerificationText;
__unaligned __declspec(align(1)) PCWSTR pszExpandedInformation;
__unaligned __declspec(align(1)) PCWSTR pszExpandedControlText;
__unaligned __declspec(align(1)) PCWSTR pszCollapsedControlText;
__unaligned __declspec(align(1)) $C33B05D48E20402CEBE2C68E58046282 u2;
__unaligned __declspec(align(1)) PCWSTR pszFooter;
__unaligned __declspec(align(1)) PFTASKDIALOGCALLBACK pfCallback;
LONG_PTR lpCallbackData;
UINT cxWidth;
};
