void __thiscall sub_850840(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, int a5)
{
  NiD3DPass *v6; // esi
  NiD3DPass *v7; // ebx
  int (__thiscall *v8)(int, _DWORD); // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebp

  v6 = (NiD3DPass *)unk_B45BEC; /*0x85086d*/
  sub_848E50(*(float **)&Stage->Name[8]); /*0x850874*/
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x850884*/
  Stage = (NiD3DPass *)v6->Stages.data->Stage; /*0x85088c*/
  v7 = Stage; /*0x85087c*/
  v9 = v8(a5, 0); /*0x850890*/
  v10 = *(_DWORD *)v7->Name; /*0x850892*/
  v11 = v9; /*0x850895*/
  if ( v10 != v9 ) /*0x850899*/
  {
    if ( v10 ) /*0x85089d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8508a3*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8508b9*/
    }
    *(_DWORD *)Stage->Name = v11; /*0x8508c1*/
    if ( v11 ) /*0x8508c4*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8508ca*/
  }
  ++v6->RefCount; /*0x8508d5*/
  Stage = v6; /*0x8508d8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x8508f0*/
  if ( v6->RefCount-- == 1 ) /*0x8508f8*/
    NiD3DPass_ReleaseToPool(v6); /*0x850903*/
  ++*((_DWORD *)this + 0xE); /*0x850908*/
}
