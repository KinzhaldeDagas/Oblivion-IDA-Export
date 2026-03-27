void __thiscall sub_437600(float ***this)
{
  NiObjectNET *v2; // edi
  int v3; // eax
  NiAVObject *v4; // esi
  int v5; // [esp+14h] [ebp-Ch] BYREF
  NiObjectNET *v6; // [esp+18h] [ebp-8h]
  int v7; // [esp+1Ch] [ebp-4h]

  v2 = sub_4BA780(**(this + 0xC), 1);
  if ( v2 )
  {
    sub_7B20B0(&v5);
    v3 = (int)*(this + 0xC);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 0xC);
    v6 = v2;
    v5 = 0;
    sub_7B4010(
      *(_DWORD *)(v3 + 4),
      *(_DWORD *)(v3 + 8),
      *(_DWORD *)(v3 + 0xC),
      &v5,
      *(_DWORD *)(v3 + 0x14),
      *(_DWORD *)(v3 + 0x18),
      *(unsigned __int16 *)(v3 + 0x10));
    if ( v6 )
      ((void (__thiscall *)(NiObjectNET *, int))*v6->vtbl)(v6, 1);
    v4 = (NiAVObject *)dword_B34424;
    NiAVObject_UpdateNiAVObject((NiAVObject *)dword_B34424, 0.0, 1);
    NiAVObject_InitializePropertyState(v4);
  }
}
