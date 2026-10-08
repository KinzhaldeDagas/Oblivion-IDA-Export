int __thiscall sub_435300(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B39C80, (int)"QueuedHead::Run()"); /*0x435312*/
  v2 = (_DWORD *)*(this + 8); /*0x435321*/
  v8 = 0; /*0x435324*/
  v9 = 0; /*0x43532c*/
  sub_523220(v2, &v8, &v9); /*0x435334*/
  v3 = *(this + 9); /*0x43533d*/
  v4 = v8; /*0x435342*/
  if ( v3 != v8 ) /*0x435344*/
  {
    if ( v3 ) /*0x435348*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x43534e*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x435364*/
    }
    *(this + 9) = v4; /*0x435368*/
    if ( v4 ) /*0x43536b*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x435371*/
  }
  v5 = *(this + 0xA); /*0x43537b*/
  v6 = v9; /*0x435380*/
  if ( v5 != v9 ) /*0x435382*/
  {
    if ( v5 ) /*0x435386*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x43538c*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4353a2*/
    }
    *(this + 0xA) = v6; /*0x4353a6*/
    if ( v6 ) /*0x4353a9*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x4353af*/
  }
  return NiLeaveCriticalSection_0(&unk_B39C80); /*0x4353bf*/
}
