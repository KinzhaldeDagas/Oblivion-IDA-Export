int __cdecl sub_8AFBE0(int *a1)
{
  int *v1; // eax
  int v2; // eax
  NiObject *v3; // eax
  NiObject *v4; // eax
  NiObjectVtbl *vftable; // eax
  UInt32 (__thiscall *Unk_03)(NiObject *); // eax

  v1 = (int *)a1[3];
  if ( !v1 )
    v1 = a1;
  if ( !v1 )
    return 0;
  v2 = *v1;
  v3 = v2 ? *(NiObject **)(v2 + 8) : 0;
  v4 = NiRTTI_Cast((BSStringT *)dword_BA7F9C, v3);
  if ( !v4 )
    return 0;
  vftable = v4[1].__vftable;
  if ( vftable )
    Unk_03 = vftable->Unk_03;
  else
    Unk_03 = 0;
  if ( Unk_03 )
    return *((_DWORD *)Unk_03 + 2);
  else
    return 0;
}
