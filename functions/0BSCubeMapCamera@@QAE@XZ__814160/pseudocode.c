// BSCubeMapCamera constructor: initializes mode +0x124, six face references +0x128..+0x13C, render/scene fields, cube frustum, and image-space shader list +0x14C.
BSCubeMapCamera *__thiscall BSCubeMapCamera::BSCubeMapCamera(BSCubeMapCamera *this, int a2)
{
  int *v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // esi
  int v7; // esi
  long double v8; // st7
  double v9; // st7
  NiTPointerList__BSImageSpaceShader *v10; // eax
  NiTPointerList__BSImageSpaceShader *v11; // eax
  NiFrustum v13; // [esp+18h] [ebp-28h] BYREF
  int v14; // [esp+3Ch] [ebp-4h]
  float v15; // [esp+44h] [ebp+4h]
  float v16; // [esp+44h] [ebp+4h]

  sub_70D590((NiCamera *)this); /*0x81418d*/
  v14 = 0; /*0x8141a9*/
  *(_DWORD *)this = &BSCubeMapCamera::`vftable'; /*0x8141ad*/
  ArrayConstructor( /*0x8141b4*/
    (char *)this + 0x128,
    4u,
    6,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x50) = 0; /*0x8141b9*/
  *((_DWORD *)this + 0x52) = 0; /*0x8141bf*/
  LOBYTE(v14) = 3; /*0x8141c9*/
  *((_DWORD *)this + 0x49) = a2;                // Store BSCubeMapCamera render mode at +0x124. ShadowPass constructs this camera with mode 0. /*0x8141ce*/
  v3 = (int *)((char *)this + 0x128); /*0x8141d4*/
  v4 = 6; /*0x8141d6*/
  do /*0x81420e*/
  {
    v5 = *v3; /*0x8141e0*/
    if ( *v3 ) /*0x8141e0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x8141ea*/
      {
        if ( v5 ) /*0x8141f6*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x814200*/
      }
      *v3 = 0; /*0x814202*/
    }
    ++v3; /*0x814208*/
    --v4; /*0x81420b*/
  }
  while ( v4 ); /*0x81420e*/
  v6 = *((_DWORD *)this + 0x50); /*0x814210*/
  if ( v6 ) /*0x814218*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x81421e*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x814234*/
    *((_DWORD *)this + 0x50) = 0; /*0x814236*/
  }
  v7 = *((_DWORD *)this + 0x52); /*0x814240*/
  if ( v7 ) /*0x814248*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x81424e*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x814264*/
    *((_DWORD *)this + 0x52) = 0; /*0x814266*/
  }
  NiFrustum::SetOrtho(&v13, 0); /*0x814276*/
  v8 = dbl_A948E8; /*0x81427b*/
  v13.Ortho = 0; /*0x814281*/
  v15 = tan(v8); /*0x81428b*/
  v9 = v15; /*0x81428f*/
  v16 = -v15; /*0x8142a6*/
  v13.Left = v16; /*0x8142b0*/
  v13.Bottom = v16; /*0x8142b4*/
  v13.Right = v9; /*0x8142b8*/
  v13.Top = v9; /*0x8142bc*/
  v13.Near = 1.0; /*0x8142c2*/
  v13.Far = flt_A2FF44; /*0x8142cc*/
  qmemcpy((char *)this + 0xEC, &v13, 0x1Cu); /*0x8142d0*/
  v10 = (NiTPointerList__BSImageSpaceShader *)FormHeapAlloc(0x1Cu); /*0x8142d2*/
  LOBYTE(v14) = 4; /*0x8142e0*/
  if ( v10 ) /*0x8142e5*/
    v11 = ImageSpaceshaderList::Create(v10); /*0x8142e9*/
  else
    v11 = 0; /*0x8142f0*/
  LOBYTE(v14) = 3; /*0x8142f4*/
  *((_DWORD *)this + 0x53) = v11;               // Store the private image-space shader list at BSCubeMapCamera+0x14C. /*0x8142f9*/
  j_NiTPointerList::FreeAllNodes(v11); /*0x8142ff*/
  return this; /*0x814306*/
}
