double __usercall sub_663D30@<st0>(TESObjectREFR *this@<ecx>, double result@<st0>)
{
  TESObjectCELL *v3; // edi
  char v4; // cl
  _BYTE *v5; // ebx
  _DWORD *v6; // edi
  float v7; // ecx
  float v8; // edx
  PlayerCharacter *v9; // [esp-10h] [ebp-58h]
  char v10; // [esp+10h] [ebp-38h]
  char v11; // [esp+14h] [ebp-34h]
  char v12; // [esp+18h] [ebp-30h]
  float v13[3]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v14[5]; // [esp+28h] [ebp-20h] BYREF
  unsigned int v15; // [esp+44h] [ebp-4h]

  v3 = *((TESObjectCELL **)this + 0x18E);
  *((_DWORD *)this + 0x18F) = 0;
  if ( v3 )
  {
    if ( v3 != TESObjectREFR_GetParentCell(this) && v3 != (TESObjectCELL *)TESObjectREFR_GetWorldSpace(this) )
    {
      v11 = sub_67F0A0();
      sub_67F0B0(1);
      v10 = sub_67F0E0();
      sub_67F0F0(1);
      v12 = sub_67F0C0();
      sub_67F0D0(0);
      v4 = *(_BYTE *)(*((_DWORD *)this + 0x18E) + 4);
      v5 = 0;
      v6 = 0;
      if ( v4 == 0x30 )
      {
        v5 = *((_BYTE **)this + 0x18E);
      }
      else if ( v4 == 0x35 )
      {
        v6 = *((_DWORD **)this + 0x18E);
      }
      sub_68A9F0(v14);
      v7 = *((float *)this + 0x18C);
      v8 = *((float *)this + 0x18D);
      v13[0] = *((float *)this + 0x18B);
      v13[1] = v7;
      v9 = TESDataHandler_g_PlayerRef;
      v15 = 0;
      v13[2] = v8;
      result = sub_68B030(v14, result, v9, v13, v5, v6);
      *((_DWORD *)this + 0x18F) = sub_68A1B0((char *)v14);
      sub_67F0F0(v10);
      sub_67F0B0(v11);
      sub_67F0D0(v12);
      v15 = 0xFFFFFFFF;
      sub_68AA10(v14);
    }
  }
  return result;
}
