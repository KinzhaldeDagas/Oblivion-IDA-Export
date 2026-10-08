struct ISecurityInformationVtbl
{
HRESULT_0 (*QueryInterface)(ISecurityInformation_0 *, const IID *const, LPVOID *);
ULONG (*AddRef)(ISecurityInformation_0 *);
ULONG (*Release)(ISecurityInformation_0 *);
HRESULT_0 (*GetObjectInformation)(ISecurityInformation_0 *, PSI_OBJECT_INFO);
HRESULT_0 (*GetSecurity)(ISecurityInformation_0 *, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR *, BOOL);
HRESULT_0 (*SetSecurity)(ISecurityInformation_0 *, SECURITY_INFORMATION, PSECURITY_DESCRIPTOR);
HRESULT_0 (*GetAccessRights)(ISecurityInformation_0 *, const GUID *, DWORD, PSI_ACCESS *, ULONG *, ULONG *);
HRESULT_0 (*MapGeneric)(ISecurityInformation_0 *, const GUID *, UCHAR *, ACCESS_MASK *);
HRESULT_0 (*GetInheritTypes)(ISecurityInformation_0 *, PSI_INHERIT_TYPE *, ULONG *);
HRESULT_0 (*PropertySheetPageCallback)(ISecurityInformation_0 *, HWND, UINT, SI_PAGE_TYPE);
};
