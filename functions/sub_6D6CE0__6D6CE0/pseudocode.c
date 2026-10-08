void __thiscall sub_6D6CE0(int this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  float v6; // eax
  int v7; // eax
  float v8; // edx
  float v9; // edx
  float applicationTime; // [esp+18h] [ebp-38h] BYREF
  float v11; // [esp+1Ch] [ebp-34h]
  int v12[2]; // [esp+20h] [ebp-30h] BYREF
  int v13[2]; // [esp+28h] [ebp-28h] BYREF
  int v14[5]; // [esp+30h] [ebp-20h] BYREF
  float v15; // [esp+48h] [ebp-8h]

  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6d6d0e*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6d6d16*/
  }
  else if ( NiTimeController_IsUpdateUnchanged((NiTimeController *)this, *(float *)&a2) ) /*0x6d6d23*/
  {
    v3 = *(_DWORD *)(this + 0x3C); /*0x6d6d2c*/
    if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x94))(v3) ) /*0x6d6d3f*/
LABEL_21:
      JUMPOUT(0x6D6EC4); /*0x6d6ec4*/
  }
  v4 = *(_DWORD *)(this + 0x3C); /*0x6d6d49*/
  if ( v4 ) /*0x6d6d4e*/
  {
    if ( (*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD, int *))(*(_DWORD *)v4 + 0x5C))( /*0x6d6d69*/
           *(float *)(this + 0x28),
           *(_DWORD *)(this + 0x30),
           &a2) )
    {
      if ( sub_6D6C80(this) ) /*0x6d6d75*/
      {
        v5 = *(_DWORD *)(*(_DWORD *)(this + 0x44) + 0xC); /*0x6d6d85*/
        if ( !v5 ) /*0x6d6d8a*/
        {
          v6 = COERCE_FLOAT(FormHeapAlloc(0x48u)); /*0x6d6d8e*/
          applicationTime = v6; /*0x6d6d96*/
          v14[4] = 0; /*0x6d6d9c*/
          if ( v6 == 0.0 ) /*0x6d6da4*/
          {
            v7 = 0; /*0x6d6de6*/
          }
          else
          {
            *(float *)v12 = kHeadBodyNormalMatchRadius; /*0x6d6dae*/
            v12[1] = v12[0]; /*0x6d6db6*/
            *(float *)v13 = 1.0; /*0x6d6dc1*/
            *(float *)&v13[1] = 1.0; /*0x6d6dc6*/
            *(float *)v14 = 0.0; /*0x6d6dd1*/
            *(float *)&v14[1] = 0.0; /*0x6d6dd5*/
            v7 = sub_72FF40(SLODWORD(v6), v14, 0.0, v13, v12, 0); /*0x6d6ddf*/
          }
          v5 = v7; /*0x6d6deb*/
          *(_DWORD *)(*(_DWORD *)(this + 0x44) + 0xC) = v7; /*0x6d6ded*/
        }
        switch ( *(_DWORD *)(this + 0x50) ) /*0x6d6dfc*/
        {
          case 0: /*0x6d6dfc*/
            v8 = *(float *)(v5 + 4); /*0x6d6e09*/
            applicationTime = v15; /*0x6d6e10*/
            v11 = v8; /*0x6d6e19*/
            sub_6D6A40((float *)v5, &applicationTime); /*0x6d6e1d*/
            return; /*0x6d6e32*/
          case 1: /*0x6d6dfc*/
            applicationTime = *(float *)v5; /*0x6d6e3e*/
            v11 = v15; /*0x6d6e4a*/
            sub_6D6A40((float *)v5, &applicationTime); /*0x6d6e4f*/
            return; /*0x6d6e64*/
          case 2: /*0x6d6dfc*/
            sub_6D6A90(v5, v15); /*0x6d6e6f*/
            return; /*0x6d6e84*/
          case 3: /*0x6d6dfc*/
            v9 = *(float *)(v5 + 0x10); /*0x6d6e8e*/
            applicationTime = v15; /*0x6d6e95*/
            v11 = v9; /*0x6d6e9d*/
            sub_6D6AD0(v5, &applicationTime); /*0x6d6ea2*/
            goto LABEL_20; /*0x6d6ea2*/
          case 4: /*0x6d6dfc*/
            applicationTime = *(float *)(v5 + 0xC); /*0x6d6eae*/
            v11 = v15; /*0x6d6eba*/
            sub_6D6AD0(v5, &applicationTime); /*0x6d6ebf*/
LABEL_20:
            def_6D6DFC(a2); /*0x6d6ebf*/
            return;
          default:
            goto LABEL_21;
        }
      }
    }
  }
  goto LABEL_21;
}
