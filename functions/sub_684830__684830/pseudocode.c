void __thiscall sub_684830(int **this)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiAVObject *v4; // esi
  void (__thiscall ***v5)(_DWORD, int); // edi
  int v6; // esi
  int *v7; // ecx
  int v8; // [esp+8h] [ebp-4h] BYREF

  v2 = (int)*(this + 0xA);
  if ( v2 )
  {
    v3 = InterlockedDecrement;
    v4 = *(NiAVObject **)(v2 + 0x1C);
    if ( v4 )
    {
      ((void (__thiscall *)(NiAVObject *, int *, int))v4->vtbl[1].super.GetType)(v4, &v8, v2);
      if ( v8 )
      {
        v5 = (void (__thiscall ***)(_DWORD, int))v8;
        if ( !v3((volatile LONG *)(v8 + 4)) )
          (**v5)(v5, 1);
      }
      NiAVObject_InitializePropertyState(v4);
    }
    v6 = (int)*(this + 0xA);
    if ( v6 )
    {
      if ( !v3((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      *(this + 0xA) = 0;
    }
    v7 = *(this + 0xC);
    if ( v7 )
      sub_680E20(v7, 0);
  }
}
