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
  float v14[9]; // [esp+1Ch] [ebp-24h] BYREF
  float v15; // [esp+44h] [ebp+4h]
  float v16; // [esp+44h] [ebp+4h]

  v4 = 0;
  if ( *(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x20 )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this) )
    {
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x170))(this) )
      {
        v5 = (NiObjectNET *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this);
        BSFornitureMarker = NiObjectNET::GetBSFornitureMarker(v5);
        if ( BSFornitureMarker )
        {
          if ( BSFornitureMarker->markers.numObjs > a2 )
          {
            p_x = (_DWORD *)&BSFornitureMarker->markers.data[a2].pos.x;
            *(_DWORD *)a3 = *p_x;
            *(_DWORD *)(a3 + 4) = p_x[1];
            *(_DWORD *)(a3 + 8) = p_x[2];
            *(_DWORD *)(a3 + 0xC) = p_x[3];
            v8 = *(_DWORD *)(a3 + 8);
            v9 = *(_DWORD *)(a3 + 4);
            v13[0] = *(_DWORD *)a3;
            v13[2] = v8;
            v10 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174);
            v13[1] = v9;
            v4 = 1;
            HIDWORD(v12) = v10(this);
            LODWORD(v12) = sub_4D7AF0(this, v14);
            sub_710580(v12, 1, (int)v13, a3);
            v15 = (double)*(unsigned __int16 *)(a3 + 0xC) / dbl_A2FC70;
            v16 = v15 + *(this + 0xA);
            sub_6FAEE0((Unk128 *)a3, v16);
          }
        }
      }
    }
  }
  return v4;
}
