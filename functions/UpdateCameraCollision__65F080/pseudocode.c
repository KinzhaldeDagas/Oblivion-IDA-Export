void __thiscall UpdateCameraCollision(
        PlayerCharacter *a2,
        NiPoint3 *CameraPosition,
        NiPoint3 *PlayerPosition,
        UInt8 CameraChasing)
{
  unsigned __int64 v4; // st7
  float z; // ebx
  float x; // esi
  float y; // edi
  double v9; // st7
  bool v10; // zf
  float v11; // ecx
  float v12; // edx
  double ScaledCollisionHeight; // st7
  _DWORD *unk1F0; // ecx
  float v19; // eax
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

  z = CameraPosition->z; /*0x65f0a2*/
  x = CameraPosition->x; /*0x65f0a6*/
  y = CameraPosition->y; /*0x65f0a9*/
  v69 = a2; /*0x65f0ac*/
  _ECX = PlayerPosition; /*0x65f0b0*/
  v75 = CameraPosition; /*0x65f0b3*/
  v71 = PlayerPosition; /*0x65f0b7*/
  v66 = x; /*0x65f0bb*/
  v67 = y; /*0x65f0bf*/
  v68 = z; /*0x65f0c3*/
  if ( !CameraChasing ) /*0x65f0c7*/
  {
    if ( byte_B14E4D ) /*0x65f0cd*/
    {
      qword_B3BB2C[3] = x; /*0x65f0d6*/
      qword_B3BB2C[4] = y; /*0x65f0dc*/
      qword_B3BB2C[5] = z; /*0x65f0e2*/
      byte_B14E4D = 0; /*0x65f0e8*/
      goto LABEL_14; /*0x65f0ef*/
    }
    __asm /*0x65f0f4*/
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
    v9 = _CIsqrt(v4); /*0x65f142*/
    __asm { fstp    [esp+90h+var_84] } /*0x65f147*/
    v10 = MEMORY[0xB3BB04] == 0; /*0x65f14b*/
    __asm /*0x65f152*/
    {
      fld     [esp+90h+var_84]
      fstp    [esp+90h+var_64]
    }
    if ( v10 ) /*0x65f15a*/
    {
      __asm { fld     dword ptr ds:0B36BE0h } /*0x65f19e*/
    }
    else
    {
      if ( !unk_B3BB05 ) /*0x65f163*/
      {
        v11 = g_zeroNiPoint3.y; /*0x65f172*/
        v12 = g_zeroNiPoint3.z; /*0x65f178*/
        v63 = g_zeroNiPoint3.x; /*0x65f17e*/
        v64 = v11; /*0x65f182*/
        v65 = v12; /*0x65f186*/
        qword_B3BB2C[3] = x; /*0x65f18a*/
        qword_B3BB2C[4] = y; /*0x65f190*/
        qword_B3BB2C[5] = z; /*0x65f196*/
LABEL_10:
        __asm /*0x65f1ce*/
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
        _CIsqrt(*(unsigned __int64 *)&v9); /*0x65f1f2*/
        __asm /*0x65f1f7*/
        {
          fstp    [esp+90h+var_84]
          fld     [esp+90h+var_84]
          fld     [esp+90h+var_64]
          fcompp
          fnstsw  ax
        }
        if ( __SETP__(HIBYTE(_AX) & 0x41, 0) ) /*0x65f20a*/
        {
          __asm /*0x65f220*/
          {
            fld     dword ptr ds:0B3BB38h
            fadd    dword ptr [esp+90h+var_80]
            fstp    dword ptr ds:0B3BB38h
          }
          qword_B3BB2C[3] = _ET1; /*0x65f22a*/
          __asm /*0x65f230*/
          {
            fld     dword ptr [esp+90h+var_80+4]
            fadd    dword ptr ds:0B3BB3Ch
            fstp    dword ptr ds:0B3BB3Ch
          }
          qword_B3BB2C[4] = _ET1; /*0x65f23a*/
          __asm /*0x65f240*/
          {
            fld     [esp+90h+var_78]
            fadd    dword ptr ds:0B3BB40h
            fstp    dword ptr ds:0B3BB40h
          }
          qword_B3BB2C[5] = _ET1; /*0x65f24a*/
        }
        else
        {
          qword_B3BB2C[3] = x; /*0x65f20c*/
          qword_B3BB2C[4] = y; /*0x65f212*/
          qword_B3BB2C[5] = z; /*0x65f218*/
        }
        x = qword_B3BB2C[3]; /*0x65f250*/
        y = qword_B3BB2C[4]; /*0x65f256*/
        z = qword_B3BB2C[5]; /*0x65f25c*/
        _ECX = v71; /*0x65f262*/
        v66 = qword_B3BB2C[3]; /*0x65f266*/
        v67 = y; /*0x65f26a*/
        v68 = z; /*0x65f26e*/
        goto LABEL_14; /*0x65f26e*/
      }
      __asm { fld     dword ptr ds:0B36BD8h } /*0x65f165*/
    }
    __asm /*0x65f1a4*/
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
    goto LABEL_10; /*0x65f1ca*/
  }
LABEL_14:
  __asm /*0x65f272*/
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
  ScaledCollisionHeight = Vector3_NormalizeInPlace(&v63); /*0x65f296*/
  __asm { fstp    [esp+90h+var_84] } /*0x65f29f*/
  unk1F0 = (_DWORD *)v69->unk1F0; /*0x65f2a3*/
  if ( unk1F0 ) /*0x65f2ab*/
  {
    v72 = v71->x; /*0x65f2b7*/
    v19 = v71->z; /*0x65f2be*/
    v73 = v71->y; /*0x65f2c1*/
    v74 = v19; /*0x65f2ca*/
    v66 = x; /*0x65f2d8*/
    v67 = y; /*0x65f2dc*/
    v68 = z; /*0x65f2e0*/
    if ( PlayerCameraCollisionPhantomPair_CastSegment(unk1F0, &v72, &v66, v77) )// UpdateCameraCollision calls the camera phantom-pair cast from player/camera position to candidate camera position; this is camera collision behavior, not a general Climbing movement rule. /*0x65f2e4*/
    {
      __asm /*0x65f2ed*/
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
      ScaledCollisionHeight = _CIsqrt(*(unsigned __int64 *)&ScaledCollisionHeight); /*0x65f337*/
      __asm /*0x65f33c*/
      {
        fstp    [esp+90h+var_64]
        fld     [esp+90h+var_64]
        fstp    [esp+90h+var_84]
      }
    }
  }
  __asm /*0x65f348*/
  {
    fld     dword ptr ds:0B36BE8h
    fmul    dword ptr ds:0B33E9Ch
    fstp    [esp+90h+var_64]
    fld     [esp+90h+var_84]
    fld     dword ptr ds:0B3BACCh
    fcom    st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x65f369*/
  {
    __asm /*0x65f375*/
    {
      fadd    [esp+90h+var_64]
      fcom    st(1)
      fnstsw  ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x65f380*/
    {
      __asm /*0x65f38c*/
      {
        fstp    st(1)
        fstp    dword ptr ds:0B3BACCh
      }
      unk_B3BACC = _ET1; /*0x65f38e*/
    }
    else
    {
      __asm /*0x65f382*/
      {
        fstp    st
        fstp    dword ptr ds:0B3BACCh
      }
      unk_B3BACC = _ET1; /*0x65f384*/
    }
  }
  else
  {
    __asm /*0x65f36b*/
    {
      fstp    st
      fstp    dword ptr ds:0B3BACCh
    }
    unk_B3BACC = _ET1; /*0x65f36d*/
  }
  __asm /*0x65f394*/
  {
    fld     dword ptr ds:0B3BACCh
    fld     dword ptr ds:0B36B60h
    fcom    st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x65f3a7*/
  {
    __asm { fstp    st } /*0x65f3b9*/
  }
  else
  {
    __asm /*0x65f3a9*/
    {
      fstp    st(1)
      fstp    dword ptr ds:0B3BACCh
    }
    unk_B3BACC = _ET1; /*0x65f3ab*/
    __asm { fld     dword ptr ds:0B3BACCh } /*0x65f3b1*/
  }
  __asm /*0x65f3bb*/
  {
    fld     dword ptr ds:0B36B68h
    fcom    st(1)
    fnstsw  ax
  }
  if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x65f3c8*/
  {
    __asm { fstp    st } /*0x65f3da*/
  }
  else
  {
    __asm /*0x65f3ca*/
    {
      fstp    st(1)
      fstp    dword ptr ds:0B3BACCh
    }
    unk_B3BACC = _ET1; /*0x65f3cc*/
    __asm { fld     dword ptr ds:0B3BACCh } /*0x65f3d2*/
  }
  __asm { fld     dword ptr [esp+90h+var_80] } /*0x65f3dc*/
  _EBX = v71; /*0x65f3e0*/
  __asm { fmul    st, st(1) } /*0x65f3e4*/
  GetMountedHorse = (int (*)(void))v69->vtbl->super.GetMountedHorse; /*0x65f3ec*/
  __asm /*0x65f3f2*/
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
  v31 = (MobileObject *)GetMountedHorse(); /*0x65f42f*/
  OpenMenuTile = Menu_GetOpenMenuTile(0x40C); /*0x65f431*/
  v33 = v69; /*0x65f436*/
  if ( OpenMenuTile ) /*0x65f43f*/
    goto LABEL_44; /*0x65f43f*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)v69); /*0x65f44e*/
  ScaledCollisionHeight = Actor_GetScaledCollisionHeight(v33); /*0x65f450*/
  __asm { fsub    qword ptr ds:0A735C8h } /*0x65f455*/
  __asm { fstp    [esp+90h+var_68] }
  if ( v31 ) /*0x65f461*/
  {
    ScaledCollisionHeight = Actor_GetScaledCollisionHeight(v31); /*0x65f465*/
    __asm /*0x65f46a*/
    {
      fmul    qword ptr ds:0A2FAA0h
      fadd    [esp+90h+var_68]
      fstp    [esp+90h+var_68]
    }
  }
  __asm { fld     [esp+90h+var_68] } /*0x65f478*/
  __asm { fstp    [esp+98h+a5]; a5 }
  __asm
  {
    fld     dword ptr ds:0B14EC0h
    fstp    [esp+98h+camera_size]; camera_size
  }
  __asm { fldz }
  if ( !PlayerCameraCollision_TestProxySphereOverlap((_DWORD *)v33->unk1F0, CharProxy, (float *)a3a, camera_size, a5) ) /*0x65f498*/
  {
    if ( !v31 ) /*0x65f4a5*/
    {
LABEL_42:
      __asm { fstp    st } /*0x65f54e*/
      goto LABEL_43; /*0x65f54e*/
    }
    __asm { fstp    [esp+98h+a5]; a5 } /*0x65f4ae*/
    __asm
    {
      fld     dword ptr ds:0A46C30h
      fstp    [esp+98h+camera_size]; camera_size
    }
    v35 = MobileObject_GetCharProxy(v31); /*0x65f4c2*/
    if ( !PlayerCameraCollision_TestProxySphereOverlap((_DWORD *)v33->unk1F0, v35, (float *)a3a, v54, a5a) ) /*0x65f4d5*/
    {
LABEL_43:
      _EBX = v71; /*0x65f550*/
LABEL_44:
      __asm /*0x65f554*/
      {
        fld1
        fld     dword ptr ds:0B14E50h
        fcom    st(1)
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 5, 0) ) /*0x65f563*/
      {
        __asm /*0x65f565*/
        {
          fld     dword ptr ds:0B33E9Ch
          fmul    qword ptr ds:0A3C800h
          faddp   st(1), st
          fstp    dword ptr ds:0B14E50h
        }
        flt_B14E50 = _ET1; /*0x65f573*/
        __asm /*0x65f579*/
        {
          fcom    dword ptr ds:0B14E50h
          fnstsw  ax
        }
        if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x65f584*/
        {
          __asm { fstp    st } /*0x65f58e*/
        }
        else
        {
          __asm { fstp    dword ptr ds:0B14E50h } /*0x65f586*/
          flt_B14E50 = _ET1; /*0x65f586*/
        }
        sub_5EE1B0((Actor *)v33, ScaledCollisionHeight); /*0x65f592*/
        if ( !v31 ) /*0x65f599*/
          goto LABEL_56; /*0x65f599*/
        __asm { fld     dword ptr ds:0B14E50h } /*0x65f59b*/
        __asm { fstp    dword ptr ds:0B14E54h }
        flt_B14E54 = _ET1; /*0x65f5a3*/
        unk_B3BB00 = (int)v31; /*0x65f5a9*/
        sub_5EE1B0((Actor *)v31, ScaledCollisionHeight); /*0x65f5af*/
LABEL_53:
        if ( v31 ) /*0x65f5c4*/
          goto LABEL_62; /*0x65f5c4*/
        goto LABEL_56; /*0x65f5c4*/
      }
      __asm { fstp    st } /*0x65f5be*/
LABEL_52:
      __asm { fstp    st } /*0x65f5c0*/
      goto LABEL_53; /*0x65f5c0*/
    }
    __asm { fldz } /*0x65f4d7*/
  }
  if ( v33->DisableFading ) /*0x65f4d9*/
    goto LABEL_42; /*0x65f4e0*/
  __asm /*0x65f4e2*/
  {
    fld     dword ptr ds:0B14E50h
    fcom    st(1)
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x65f4ef*/
  {
    _EBX = v71; /*0x65f5b6*/
    __asm { fstp    st(1) } /*0x65f5ba*/
    goto LABEL_52; /*0x65f5bc*/
  }
  __asm /*0x65f4f5*/
  {
    fld     dword ptr ds:0B33E9Ch
    fmul    qword ptr ds:0A3C800h
    fsubp   st(1), st
    fstp    dword ptr ds:0B14E50h
  }
  flt_B14E50 = _ET1; /*0x65f503*/
  __asm /*0x65f509*/
  {
    fcom    dword ptr ds:0B14E50h
    fnstsw  ax
  }
  if ( (_AX & 0x4100) != 0 ) /*0x65f514*/
  {
    __asm { fstp    st } /*0x65f51e*/
  }
  else
  {
    __asm { fstp    dword ptr ds:0B14E50h } /*0x65f516*/
    flt_B14E50 = _ET1; /*0x65f516*/
  }
  sub_5EE1B0((Actor *)v33, ScaledCollisionHeight); /*0x65f522*/
  if ( v31 ) /*0x65f529*/
  {
    __asm { fld     dword ptr ds:0B14E50h } /*0x65f52f*/
    __asm { fstp    dword ptr ds:0B14E54h }
    flt_B14E54 = _ET1; /*0x65f537*/
    unk_B3BB00 = (int)v31; /*0x65f53d*/
    sub_5EE1B0((Actor *)v31, ScaledCollisionHeight); /*0x65f543*/
    _EBX = v71; /*0x65f548*/
    goto LABEL_53; /*0x65f54c*/
  }
  _EBX = v71; /*0x65f5c8*/
LABEL_56:
  v46 = (Actor *)unk_B3BB00; /*0x65f5cc*/
  if ( unk_B3BB00 ) /*0x65f5cc*/
  {
    __asm /*0x65f5d6*/
    {
      fld     dword ptr ds:0B33E9Ch
      fmul    qword ptr ds:0A3C800h
      fadd    dword ptr ds:0B14E54h
      fstp    dword ptr ds:0B14E54h
    }
    flt_B14E54 = _ET1; /*0x65f5e8*/
    __asm /*0x65f5ee*/
    {
      fld1
      fcom    dword ptr ds:0B14E54h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x65f5fb*/
    {
      __asm { fstp    st } /*0x65f605*/
    }
    else
    {
      __asm { fstp    dword ptr ds:0B14E54h } /*0x65f5fd*/
      flt_B14E54 = _ET1; /*0x65f5fd*/
    }
    sub_5EE1B0(v46, ScaledCollisionHeight); /*0x65f607*/
    __asm /*0x65f60c*/
    {
      fld1
      fcomp   dword ptr ds:0B14E54h
      fnstsw  ax
    }
    if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x65f619*/
      unk_B3BB00 = 0; /*0x65f61b*/
  }
LABEL_62:
  __asm { fld     dword ptr [esp+90h+var_80] } /*0x65f625*/
  v51 = v75; /*0x65f629*/
  __asm { fld     dword ptr ds:0B3BACCh } /*0x65f62d*/
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
  v52 = v67; /*0x65f66a*/
  __asm { fld     dword ptr [ebx+8] } /*0x65f66e*/
  v75->x = v66; /*0x65f671*/
  __asm { fadd    [esp+88h+var_54] } /*0x65f673*/
  v51->y = v52; /*0x65f677*/
  __asm { fstp    [esp+84h+var_6C] } /*0x65f682*/
  v51->z = v68; /*0x65f68c*/
}
