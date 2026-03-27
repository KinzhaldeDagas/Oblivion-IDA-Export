int __thiscall sub_6D6CE0(int this, float a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  float v6; // eax
  int v7; // eax
  float v8; // edx
  float v10; // edx
  float v11; // [esp+18h] [ebp-38h] BYREF
  float v12; // [esp+1Ch] [ebp-34h]
  int v13[2]; // [esp+20h] [ebp-30h] BYREF
  int v14[2]; // [esp+28h] [ebp-28h] BYREF
  int v15[5]; // [esp+30h] [ebp-20h] BYREF
  float v16; // [esp+48h] [ebp-8h]

  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
  {
    *(float *)(this + 0x28) = flt_A7A164;
  }
  else if ( sub_6C36B0((float *)this, a2) )
  {
    v3 = *(_DWORD *)(this + 0x3C);
    if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x94))(v3) )
LABEL_21:
      JUMPOUT(0x6D6EC4);
  }
  v4 = *(_DWORD *)(this + 0x3C);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD, float *))(*(_DWORD *)v4 + 0x5C))(
           *(float *)(this + 0x28),
           *(_DWORD *)(this + 0x30),
           &a2) )
    {
      if ( sub_6D6C80(this) )
      {
        v5 = *(_DWORD *)(*(_DWORD *)(this + 0x44) + 0xC);
        if ( !v5 )
        {
          v6 = COERCE_FLOAT(FormHeapAlloc(0x48u));
          v11 = v6;
          v15[4] = 0;
          if ( v6 == 0.0 )
          {
            v7 = 0;
          }
          else
          {
            *(float *)v13 = flt_A3D65C;
            v13[1] = v13[0];
            *(float *)v14 = 1.0;
            *(float *)&v14[1] = 1.0;
            *(float *)v15 = 0.0;
            *(float *)&v15[1] = 0.0;
            v7 = sub_72FF40(SLODWORD(v6), (int)v15, 0.0, (int)v14, (int)v13, 0);
          }
          v5 = v7;
          *(_DWORD *)(*(_DWORD *)(this + 0x44) + 0xC) = v7;
        }
        switch ( *(_DWORD *)(this + 0x50) )
        {
          case 0:
            v8 = *(float *)(v5 + 4);
            v11 = v16;
            v12 = v8;
            return sub_6D6A40((float *)v5, &v11);
          case 1:
            v11 = *(float *)v5;
            v12 = v16;
            return sub_6D6A40((float *)v5, &v11);
          case 2:
            return sub_6D6A90(v5, v16);
          case 3:
            v10 = *(float *)(v5 + 0x10);
            v11 = v16;
            v12 = v10;
            sub_6D6AD0(v5, &v11);
            return def_6D6DFC(LODWORD(a2));
          case 4:
            v11 = *(float *)(v5 + 0xC);
            v12 = v16;
            sub_6D6AD0(v5, &v11);
            return def_6D6DFC(LODWORD(a2));
          default:
            goto LABEL_21;
        }
      }
    }
  }
  goto LABEL_21;
}
