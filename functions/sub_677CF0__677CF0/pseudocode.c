void __thiscall sub_677CF0(int *this, int incoming)
{
  int v2; // ebx
  int *v3; // eax
  int *v4; // esi
  bool v5; // zf
  _DWORD *v6; // edi
  int v7[7]; // [esp-4h] [ebp-28h] BYREF
  unsigned int v8; // [esp+20h] [ebp-4h]

  v2 = incoming; /*0x677d16*/
  v8 = 0; /*0x677d1c*/
  if ( incoming ) /*0x677d24*/
  {
    v3 = this + 1; /*0x677d2e*/
    v4 = this; /*0x677d31*/
    if ( *(this + 1) ) /*0x677d2a*/
    {
      do /*0x677d3e*/
      {
        v4 = (int *)*v3; /*0x677d35*/
        v5 = *(_DWORD *)(*v3 + 4) == 0; /*0x677d37*/
        v3 = (int *)(*v3 + 4); /*0x677d3b*/
      }
      while ( !v5 ); /*0x677d3e*/
    }
    if ( *v4 ) /*0x677d40*/
    {
      v6 = (_DWORD *)FormHeapAlloc(8u); /*0x677d4c*/
      v7[5] = (int)v6; /*0x677d51*/
      LOBYTE(v8) = 1; /*0x677d57*/
      if ( v6 ) /*0x677d5c*/
      {
        v7[0] = v2; /*0x677d61*/
        v7[6] = (int)v7; /*0x677d66*/
        InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x677d6b*/
        v4[1] = (int)sub_532DF0(v6, v7[0]); /*0x677d78*/
      }
      else
      {
        v4[1] = 0; /*0x677d7f*/
      }
    }
    else
    {
      OB_NiSmartPointer_Assign_010201A0(v4, &incoming); /*0x677d8b*/
    }
    v8 = 0xFFFFFFFF; /*0x677d94*/
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x677d9c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x677dae*/
  }
}
