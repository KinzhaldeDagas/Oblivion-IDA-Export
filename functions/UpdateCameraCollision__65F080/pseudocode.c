void __thiscall UpdateCameraCollision(
        PlayerCharacter *a2,
        NiPoint3 *CameraPosition,
        NiPoint3 *PlayerPosition,
        UInt8 CameraChasing)
{
  double v4; // st7
  int z_low; // ebx
  float x; // esi
  float y; // edi
  double v9; // st7
  bool v10; // zf
  float v11; // ecx
  float v12; // edx
  double v17; // st7
  _DWORD *unk1F0; // ecx
  float z; // eax
  int (*GetMountedHorse)(void); // edx
  MobileObject *v31; // esi
  int OpenMenuTile; // eax
  PlayerCharacter *v33; // edi
  bhkCharacterProxy *CharProxy; // ebx
  bhkCharacterProxy *v35; // eax
  Actor *v46; // ecx
  NiPoint3 *v51; // eax
  float v52; // ecx
  float camera_size; // [esp+0h] [ebp-98h]
  float v54; // [esp+0h] [ebp-98h]
  float a5; // [esp+4h] [ebp-94h]
  float a5a; // [esp+4h] [ebp-94h]
  float v63; // [esp+18h] [ebp-80h] BYREF
  float v64; // [esp+1Ch] [ebp-7Ch]
  float v65; // [esp+20h] [ebp-78h]
  float v66; // [esp+24h] [ebp-74h] BYREF
  float v67; // [esp+28h] [ebp-70h]
  float v68; // [esp+2Ch] [ebp-6Ch]
  PlayerCharacter *v69; // [esp+30h] [ebp-68h]
  NiPoint3 *v71; // [esp+38h] [ebp-60h]
  float v72; // [esp+3Ch] [ebp-5Ch] BYREF
  float v73; // [esp+40h] [ebp-58h]
  float v74; // [esp+44h] [ebp-54h]
  NiPoint3 *v75; // [esp+48h] [ebp-50h]
  int a3a[3]; // [esp+4Ch] [ebp-4Ch] BYREF
  __m128 v77[3]; // [esp+58h] [ebp-40h] BYREF

  z_low = SLODWORD(CameraPosition->z);
  x = CameraPosition->x;
  y = CameraPosition->y;
  v69 = a2;
  _ECX = PlayerPosition;
  v75 = CameraPosition;
  v71 = PlayerPosition;
  v66 = x;
  v67 = y;
  v68 = *(float *)&z_low;
  if ( !CameraChasing )
  {
    if ( byte_B14E4D )
    {
      *(float *)&qword_B3BB38 = x;
      *((float *)&qword_B3BB38 + 1) = y;
      dword_B3BB40 = z_low;
      byte_B14E4D = 0;
      goto LABEL_14;
    }
    __asm
    {
      fld     dword ptr [esp+90h+var_74]
      fsub    dword ptr ds:0B3BB38h
      fstp    dword ptr [esp+90h+var_80]
      fld     dword ptr [esp+90h+var_74+4]
      fsub    dword ptr ds:0B3BB3Ch
      fstp    dword ptr [esp+90h+var_80+4]
      fld     [esp+90h+var_6C]
      fsub    dword ptr ds:0B3BB40h
      fstp    [esp+90h+var_78]
      fld     dword ptr [esp+90h+var_80+4]
      fld     dword ptr [esp+90h+var_80]
      fld     [esp+90h+var_78]
      fld     st(1)
      fmulp   st(2), st
      fld     st(2)
      fmulp   st(3), st
      fxch    st(1)
      faddp   st(2), st
      fmul    st, st
      faddp   st(1), st
      fstp    [esp+90h+var_84]
      fld     [esp+90h+var_84]
    }
    v9 = _CIsqrt(v4);
    __asm { fstp    [esp+90h+var_84] }
    v10 = VanityCamState == 0;
    __asm
    {
      fld     [esp+90h+var_84]
      fstp    [esp+90h+var_64]
    }
    if ( v10 )
    {
      __asm { fld     dword ptr ds:0B36BE0h }
    }
    else
    {
      if ( !byte_B3BB05 )
      {
        v11 = *(&Vector3_InitValue_ + 1);
        v12 = dword_B3F9B0;
        v63 = Vector3_InitValue_;
        v64 = v11;
        v65 = v12;
        *(float *)&qword_B3BB38 = x;
        *((float *)&qword_B3BB38 + 1) = y;
        dword_B3BB40 = z_low;
LABEL_10:
        __asm
        {
          fld     dword ptr [esp+90h+var_80+4]
          fld     dword ptr [esp+90h+var_80]
          fld     [esp+90h+var_78]
          fld     st(1)
          fmulp   st(2), st
          fld     st(2)
          fmulp   st(3), st
          fxch    st(1)
          faddp   st(2), st
          fmul    st, st
          faddp   st(1), st
          fstp    [esp+90h+var_84]
          fld     [esp+90h+var_84]
        }
        _CIsqrt(v9);
        __asm
        {
          fstp    [esp+90h+var_84]
          fld     [esp+90h+var_84]
          fld     [esp+90h+var_64]
          fcompp
          fnstsw  ax
        }
        if ( __SETP__(HIBYTE(_AX) & 0x41, 0) )
        {
          __asm
          {
            fld     dword ptr ds:0B3BB38h
            fadd    dword ptr [esp+90h+var_80]
            fstp    dword ptr ds:0B3BB38h
          }
          *(float *)&qword_B3BB38 = _ET1;
          __asm
          {
            fld     dword ptr [esp+90h+var_80+4]
            fadd    dword ptr ds:0B3BB3Ch
            fstp    dword ptr ds:0B3BB3Ch
          }
          *((float *)&qword_B3BB38 + 1) = _ET1;
          __asm
          {
            fld     [esp+90h+var_78]
            fadd    dword ptr ds:0B3BB40h
            fstp    dword ptr ds:0B3BB40h
          }
          dword_B3BB40 = _ET1;
        }
        else
        {
          *(float *)&qword_B3BB38 = x;
          *((float *)&qword_B3BB38 + 1) = y;
          dword_B3BB40 = z_low;
        }
        x = *(float *)&qword_B3BB38;
        y = *((float *)&qword_B3BB38 + 1);
        z_low = dword_B3BB40;
        _ECX = v71;
        v66 = *(float *)&qword_B3BB38;
        v67 = y;
        v68 = *(float *)&z_low;
        goto LABEL_14;
      }
      __asm { fld     dword ptr ds:0B36BD8h }
    }
    __asm
    {
      fmul    dword ptr ds:0B33E9Ch
      fstp    [esp+90h+var_84]
      fld     [esp+90h+var_84]
      fld     st
      fmul    dword ptr [esp+90h+var_80]
      fstp    dword ptr [esp+90h+var_80]
      fld     dword ptr [esp+90h+var_80+4]
      fmul    st, st(1)
      fstp    dword ptr [esp+90h+var_80+4]
      fmul    [esp+90h+var_78]
      fstp    [esp+90h+var_78]
    }
    goto LABEL_10;
  }
LABEL_14:
  __asm
  {
    fld     dword ptr [esp+90h+var_74]
    fsub    dword ptr [ecx]
    fstp    dword ptr [esp+90h+var_80]
    fld     dword ptr [esp+90h+var_74+4]
    fsub    dword ptr [ecx+4]
    fstp    dword ptr [esp+90h+var_80+4]
    fld     [esp+90h+var_6C]
    fsub    dword ptr [ecx+8]
  }
  __asm { fstp    [esp+90h+var_78] }
  v17 = sub_43F350(&v63);
  __asm { fstp    [esp+90h+var_84] }
  unk1F0 = (_DWORD *)v69->unk1F0;
  if ( unk1F0 )
  {
    v72 = v71->x;
    z = v71->z;
    v73 = v71->y;
    v74 = z;
    v66 = x;
    v67 = y;
    v68 = *(float *)&z_low;
    if ( sub_5326B0(unk1F0, &v72, &v66, v77) )
    {
      __asm
      {
        fld     dword ptr [esp+90h+var_74]
        fsub    [esp+90h+var_5C]
        fstp    dword ptr [esp+90h+var_74]
        fld     dword ptr [esp+90h+var_74+4]
        fsub    [esp+90h+var_58]
        fstp    dword ptr [esp+90h+var_74+4]
        fld     [esp+90h+var_6C]
        fsub    [esp+90h+var_54]
        fstp    [esp+90h+var_6C]
        fld     dword ptr [esp+90h+var_74+4]
        fld     dword ptr [esp+90h+var_74]
        fld     [esp+90h+var_6C]
        fld     st(2)
        fmulp   st(3), st
        fld     st(1)
        fmulp   st(2), st
        fxch    st(2)
        faddp   st(1), st
        fld     st(1)
        fmulp   st(2), st
        faddp   st(1), st
        fstp    [esp+90h+var_64]
        fld     [esp+90h+var_64]
      }
      v17 = _CIsqrt(v17);
      __asm
      {
        fstp    [esp+90h+var_64]
        fld     [esp+90h+var_64]
        fstp    [esp+90h+var_84]
      }
    }
  }
  __asm
  {
    fld     dword ptr ds:0B36BE8h
    fmul    dword ptr ds:0B33E9Ch
    fstp    [esp+90h+var_64]
    fld     [esp+90h+var_84]
    fld     dword ptr ds:0B3BACCh
    fcom    st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x100) != 0 )
  {
    __asm
    {
      fadd    [esp+90h+var_64]
      fcom    st(1)
      fnstsw  ax
    }
    if ( (_AX & 0x4100) != 0 )
    {
      __asm
      {
        fstp    st(1)
        fstp    dword ptr ds:0B3BACCh
      }
      flt_B3BACC = _ET1;
    }
    else
    {
      __asm
      {
        fstp    st
        fstp    dword ptr ds:0B3BACCh
      }
      flt_B3BACC = _ET1;
    }
  }
  else
  {
    __asm
    {
      fstp    st
      fstp    dword ptr ds:0B3BACCh
    }
    flt_B3BACC = _ET1;
  }
  __asm
  {
    fld     dword ptr ds:0B3BACCh
    fld     dword ptr ds:0B36B60h
    fcom    st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 )
  {
    __asm { fstp    st }
  }
  else
  {
    __asm
    {
      fstp    st(1)
      fstp    dword ptr ds:0B3BACCh
    }
    flt_B3BACC = _ET1;
    __asm { fld     dword ptr ds:0B3BACCh }
  }
  __asm
  {
    fld     dword ptr ds:0B36B68h
    fcom    st(1)
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) )
  {
    __asm { fstp    st }
  }
  else
  {
    __asm
    {
      fstp    st(1)
      fstp    dword ptr ds:0B3BACCh
    }
    flt_B3BACC = _ET1;
    __asm { fld     dword ptr ds:0B3BACCh }
  }
  __asm { fld     dword ptr [esp+90h+var_80] }
  _EBX = v71;
  __asm { fmul    st, st(1) }
  GetMountedHorse = (int (*)(void))v69->vtbl->super.GetMountedHorse;
  __asm
  {
    fstp    [esp+90h+var_5C]
    fld     dword ptr [esp+90h+var_80+4]
    fmul    st, st(1)
    fstp    [esp+90h+var_58]
    fmul    [esp+90h+var_78]
    fstp    [esp+90h+var_54]
    fld     [esp+90h+var_5C]
    fadd    dword ptr [ebx]
    fstp    [esp+90h+a3]
    fld     [esp+90h+var_58]
    fadd    dword ptr [ebx+4]
    fstp    [esp+90h+var_48]
    fld     dword ptr [ebx+8]
    fadd    [esp+90h+var_54]
    fstp    [esp+90h+var_44]
  }
  v31 = (MobileObject *)GetMountedHorse();
  OpenMenuTile = Menu_GetOpenMenuTile(0x40C);
  v33 = v69;
  if ( OpenMenuTile )
    goto LABEL_44;
  CharProxy = MobileObject_GetCharProxy((MobileObject *)v69);
  v17 = sub_5E0660(v33);
  __asm { fsub    qword ptr ds:0A735C8h }
  __asm { fstp    [esp+90h+var_68] }
  if ( v31 )
  {
    v17 = sub_5E0660(v31);
    __asm
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    [esp+90h+var_68]
      fstp    [esp+90h+var_68]
    }
  }
  __asm { fld     [esp+90h+var_68] }
  __asm { fstp    [esp+98h+a5]; a5 }
  __asm
  {
    fld     dword ptr ds:0B14EC0h
    fstp    [esp+98h+camera_size]; camera_size
  }
  __asm { fldz }
  if ( !sub_5328B0((_DWORD *)v33->unk1F0, CharProxy, (float *)a3a, camera_size, a5) )
  {
    if ( !v31 )
    {
LABEL_42:
      __asm { fstp    st }
      goto LABEL_43;
    }
    __asm { fstp    [esp+98h+a5]; a5 }
    __asm
    {
      fld     dword ptr ds:0A46C30h
      fstp    [esp+98h+camera_size]; camera_size
    }
    v35 = MobileObject_GetCharProxy(v31);
    if ( !sub_5328B0((_DWORD *)v33->unk1F0, v35, (float *)a3a, v54, a5a) )
    {
LABEL_43:
      _EBX = v71;
LABEL_44:
      __asm
      {
        fld1
        fld     dword ptr ds:0B14E50h
        fcom    st(1)
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 5, 0) )
      {
        __asm
        {
          fld     dword ptr ds:0B33E9Ch
          fmul    qword ptr ds:0A3C800h
          faddp   st(1), st
          fstp    dword ptr ds:0B14E50h
        }
        flt_B14E50 = _ET1;
        __asm
        {
          fcom    dword ptr ds:0B14E50h
          fnstsw  ax
        }
        if ( __SETP__(HIBYTE(_AX) & 5, 0) )
        {
          __asm { fstp    st }
        }
        else
        {
          __asm { fstp    dword ptr ds:0B14E50h }
          flt_B14E50 = _ET1;
        }
        sub_5EE1B0((Actor *)v33, v17);
        if ( !v31 )
          goto LABEL_56;
        __asm { fld     dword ptr ds:0B14E50h }
        __asm { fstp    dword ptr ds:0B14E54h }
        flt_B14E54 = _ET1;
        dword_B3BB00 = (int)v31;
        sub_5EE1B0((Actor *)v31, v17);
LABEL_53:
        if ( v31 )
          goto LABEL_62;
        goto LABEL_56;
      }
      __asm { fstp    st }
LABEL_52:
      __asm { fstp    st }
      goto LABEL_53;
    }
    __asm { fldz }
  }
  if ( v33->DisableFading )
    goto LABEL_42;
  __asm
  {
    fld     dword ptr ds:0B14E50h
    fcom    st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 )
  {
    _EBX = v71;
    __asm { fstp    st(1) }
    goto LABEL_52;
  }
  __asm
  {
    fld     dword ptr ds:0B33E9Ch
    fmul    qword ptr ds:0A3C800h
    fsubp   st(1), st
    fstp    dword ptr ds:0B14E50h
  }
  flt_B14E50 = _ET1;
  __asm
  {
    fcom    dword ptr ds:0B14E50h
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 )
  {
    __asm { fstp    st }
  }
  else
  {
    __asm { fstp    dword ptr ds:0B14E50h }
    flt_B14E50 = _ET1;
  }
  sub_5EE1B0((Actor *)v33, v17);
  if ( v31 )
  {
    __asm { fld     dword ptr ds:0B14E50h }
    __asm { fstp    dword ptr ds:0B14E54h }
    flt_B14E54 = _ET1;
    dword_B3BB00 = (int)v31;
    sub_5EE1B0((Actor *)v31, v17);
    _EBX = v71;
    goto LABEL_53;
  }
  _EBX = v71;
LABEL_56:
  v46 = (Actor *)dword_B3BB00;
  if ( dword_B3BB00 )
  {
    __asm
    {
      fld     dword ptr ds:0B33E9Ch
      fmul    qword ptr ds:0A3C800h
      fadd    dword ptr ds:0B14E54h
      fstp    dword ptr ds:0B14E54h
    }
    flt_B14E54 = _ET1;
    __asm
    {
      fld1
      fcom    dword ptr ds:0B14E54h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) )
    {
      __asm { fstp    st }
    }
    else
    {
      __asm { fstp    dword ptr ds:0B14E54h }
      flt_B14E54 = _ET1;
    }
    sub_5EE1B0(v46, v17);
    __asm
    {
      fld1
      fcomp   dword ptr ds:0B14E54h
      fnstsw  ax
    }
    if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
      dword_B3BB00 = 0;
  }
LABEL_62:
  __asm { fld     dword ptr [esp+90h+var_80] }
  v51 = v75;
  __asm { fld     dword ptr ds:0B3BACCh }
  __asm { fld     st }
  __asm
  {
    fmulp   st(2), st
    fxch    st(1)
    fstp    [esp+88h+var_5C]
    fld     dword ptr [esp+88h+var_80+4]
    fmul    st, st(1)
    fstp    [esp+88h+var_58]
    fmul    [esp+88h+var_78]
    fstp    [esp+88h+var_54]
    fld     [esp+88h+var_5C]
    fadd    dword ptr [ebx]
    fstp    dword ptr [esp+88h+var_74]
  }
  __asm
  {
    fld     [esp+88h+var_58]
    fadd    dword ptr [ebx+4]
    fstp    dword ptr [esp+88h+var_74+4]
  }
  v52 = v67;
  __asm { fld     dword ptr [ebx+8] }
  v75->x = v66;
  __asm { fadd    [esp+88h+var_54] }
  v51->y = v52;
  __asm { fstp    [esp+84h+var_6C] }
  v51->z = v68;
}
