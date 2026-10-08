int __thiscall sub_496EA0(char *this, TESObjectCELL *a2)
{
  char v3; // bl
  struct _RTL_CRITICAL_SECTION *v4; // ebp
  int result; // eax
  DWORD CurrentThreadId; // [esp-8h] [ebp-20h]
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v3 = 1; /*0x496ead*/
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 0x80); /*0x496eaf*/
  while ( 1 ) /*0x496ec7*/
  {
    NiEnterCriticalSection(v4, (int)&unk_A2F830); /*0x496ec7*/
    v7 = 0; /*0x496ece*/
    v8 = 0; /*0x496ed2*/
    if ( sub_496DF0(this, (int)a2, &v7) ) /*0x496ede*/
    {
      if ( v7 != GetCurrentThreadId() ) /*0x496f02*/
        goto LABEL_7; /*0x496f02*/
      sub_496D50(this, (int)a2, v7, v8 + 1); /*0x496f10*/
    }
    else
    {
      CurrentThreadId = GetCurrentThreadId(); /*0x496ef3*/
      sub_496D50(this, (int)a2, CurrentThreadId, 1); /*0x496ef4*/
    }
    v3 = 0; /*0x496f15*/
LABEL_7:
    v4 = (struct _RTL_CRITICAL_SECTION *)(this + 0x80); /*0x496f17*/
    result = NiLeaveCriticalSection_0((LPCRITICAL_SECTION)this + 4); /*0x496f1f*/
    if ( !v3 ) /*0x496f26*/
      return result; /*0x496f3b*/
    sub_498EE0(*((_DWORD *)this + 0x40), 1); /*0x496f31*/
  }
}
