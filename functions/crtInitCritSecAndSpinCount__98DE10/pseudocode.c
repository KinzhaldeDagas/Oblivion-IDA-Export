BOOL __usercall __crtInitCritSecAndSpinCount@<eax>(int a1@<ebx>, _RTL_CRITICAL_SECTION_0 *a2, DWORD a3)
{
  BOOL (__stdcall *InitializeCriticalSectionAndSpinCount)(LPCRITICAL_SECTION, DWORD); // esi
  signed int v4; // eax
  int v5; // edx
  HMODULE ModuleHandleA; // eax
  int v8; // [esp-4h] [ebp-38h]
  int v9; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v9 = 0;
  InitializeCriticalSectionAndSpinCount = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD))_decode_pointer((void *)dword_BAA5F0);
  if ( !InitializeCriticalSectionAndSpinCount )
  {
    v4 = sub_981BF8(&v9);
    if ( v4 )
      _invoke_watson(v4, v5, v8, a1, 0, 0);
    if ( v9 == 1
      || (ModuleHandleA = GetModuleHandleA("kernel32.dll")) == 0
      || (InitializeCriticalSectionAndSpinCount = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD))GetProcAddress(
                                                                                                   ModuleHandleA,
                                                                                                   "InitializeCriticalSec"
                                                                                                   "tionAndSpinCount")) == 0 )
    {
      InitializeCriticalSectionAndSpinCount = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD))__crtInitCritSecNoSpinCount;
    }
    dword_BAA5F0 = (int)_encode_pointer(InitializeCriticalSectionAndSpinCount);
  }
  ms_exc.registration.TryLevel = 0;
  return InitializeCriticalSectionAndSpinCount(a2, a3);
}
