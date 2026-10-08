BOOL __usercall __crtInitCritSecAndSpinCount@<eax>(int a1@<ebx>, _RTL_CRITICAL_SECTION_0 *a2, DWORD a3)
{
  BOOL (__stdcall *InitializeCriticalSectionAndSpinCount)(LPCRITICAL_SECTION, DWORD); // esi
  signed int v4; // eax
  int v5; // edx
  HMODULE ModuleHandleA; // eax
  int v8; // [esp-4h] [ebp-38h]
  int v9; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = 0; /*0x98de1e*/
  InitializeCriticalSectionAndSpinCount = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD))_decode_pointer((void *)dword_BA9E10[0x1F8]); /*0x98de2d*/
  if ( !InitializeCriticalSectionAndSpinCount ) /*0x98de31*/
  {
    v4 = sub_981BF8(a1, 0, &v9); /*0x98de37*/
    if ( v4 ) /*0x98de3f*/
      _invoke_watson(v4, v5, v8, a1, 0, 0); /*0x98de46*/
    if ( v9 == 1 /*0x98de73*/
      || (ModuleHandleA = GetModuleHandleA("kernel32.dll")) == 0
      || (InitializeCriticalSectionAndSpinCount = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD))GetProcAddress(
                                                                                                   ModuleHandleA,
                                                                                                   "InitializeCriticalSec"
                                                                                                   "tionAndSpinCount")) == 0 )
    {
      InitializeCriticalSectionAndSpinCount = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD))__crtInitCritSecNoSpinCount; /*0x98de75*/
    }
    dword_BA9E10[0x1F8] = _encode_pointer(InitializeCriticalSectionAndSpinCount); /*0x98de81*/
  }
  ms_exc.registration.TryLevel = 0; /*0x98de86*/
  return InitializeCriticalSectionAndSpinCount(a2, a3); /*0x98decf*/
}
