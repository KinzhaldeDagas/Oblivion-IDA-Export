void __thiscall sub_8506B0(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, int a5)
{
  NiD3DPass *v6; // esi
  int v7; // ebx
  int (__thiscall *v8)(int, _DWORD); // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebp

  v6 = (NiD3DPass *)dword_B45BE4;
  sub_848E50(*(_DWORD *)(Stage + 0xC));
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88);
  Stage = v6->Stages.data->Stage;
  v7 = Stage;
  v9 = v8(a5, 0);
  v10 = *(_DWORD *)(v7 + 4);
  v11 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *(_DWORD *)(Stage + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  ++v6->RefCount;
  Stage = (int)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
