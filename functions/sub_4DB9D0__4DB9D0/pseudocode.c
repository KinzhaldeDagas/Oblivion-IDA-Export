// BunkFix: plugin activation assist uses this helper as a guard to ensure the selected free marker has a resolvable BSFurnitureMarker transform before applying SetSleepState.
char __thiscall sub_4DB9D0(float *this, unsigned int a2, int a3)
{
  char v4; // bl
  NiObjectNET *v5; // eax
  BSFurnitureMarker *BSFornitureMarker; // eax
  _DWORD *p_x; // eax
  int v8; // edx
  int v9; // ecx
  int (__thiscall *v10)(float *); // eax
  __int64 v12; // [esp-10h] [ebp-50h]
  _DWORD v13[3]; // [esp+10h] [ebp-30h] BYREF
  NiMatrix33 v14; // [esp+1Ch] [ebp-24h] BYREF
  float v15; // [esp+44h] [ebp+4h]
  float v16; // [esp+44h] [ebp+4h]

  v4 = 0; /*0x4db9df*/
  if ( *(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x20 ) /*0x4db9e7*/
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this) ) /*0x4db9f7*/
    {
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x170))(this) ) /*0x4dba0b*/
      {
        v5 = (NiObjectNET *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this); /*0x4dba1f*/
        BSFornitureMarker = NiObjectNET::GetBSFornitureMarker(v5); /*0x4dba22*/
        if ( BSFornitureMarker ) /*0x4dba2c*/
        {
          if ( BSFornitureMarker->markers.numObjs > a2 ) /*0x4dba3c*/
          {
            p_x = (_DWORD *)&BSFornitureMarker->markers.data[a2].pos.x; /*0x4dba48*/
            *(_DWORD *)a3 = *p_x; /*0x4dba51*/
            *(_DWORD *)(a3 + 4) = p_x[1]; /*0x4dba56*/
            *(_DWORD *)(a3 + 8) = p_x[2]; /*0x4dba5c*/
            *(_DWORD *)(a3 + 0xC) = p_x[3]; /*0x4dba62*/
            v8 = *(_DWORD *)(a3 + 8); /*0x4dba67*/
            v9 = *(_DWORD *)(a3 + 4); /*0x4dba6a*/
            v13[0] = *(_DWORD *)a3; /*0x4dba6d*/
            v13[2] = v8; /*0x4dba76*/
            v10 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174); /*0x4dba7d*/
            v13[1] = v9; /*0x4dba83*/
            v4 = 1; /*0x4dba8b*/
            HIDWORD(v12) = v10(this); /*0x4dba8f*/
            LODWORD(v12) = sub_4D7AF0(this, &v14); /*0x4dba9c*/
            sub_710580(v12, 1u, (int)v13, a3); /*0x4dba9d*/
            v15 = (double)*(unsigned __int16 *)(a3 + 0xC) / dbl_A2FC70; /*0x4dbab9*/
            v16 = v15 + *(this + 0xA); /*0x4dbac4*/
            sub_6FAEE0((Unk128 *)a3, v16); /*0x4dbacf*/
          }
        }
      }
    }
  }
  return v4; /*0x4dbad5*/
}
