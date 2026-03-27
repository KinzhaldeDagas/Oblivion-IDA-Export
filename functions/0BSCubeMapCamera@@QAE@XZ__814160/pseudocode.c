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

  sub_70D590((NiCamera *)this);
  v14 = 0;
  *(_DWORD *)this = &BSCubeMapCamera::`vftable';
  ArrayConstructor(
    (char *)this + 0x128,
    4u,
    6,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x50) = 0;
  *((_DWORD *)this + 0x52) = 0;
  LOBYTE(v14) = 3;
  *((_DWORD *)this + 0x49) = a2;
  v3 = (int *)((char *)this + 0x128);
  v4 = 6;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      *v3 = 0;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  v6 = *((_DWORD *)this + 0x50);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0x50) = 0;
  }
  v7 = *((_DWORD *)this + 0x52);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0x52) = 0;
  }
  NiFrustum::SetOrtho(&v13, 0);
  v8 = dbl_A948E8;
  v13.Ortho = 0;
  v15 = tan(v8);
  v9 = v15;
  v16 = -v15;
  v13.Left = v16;
  v13.Bottom = v16;
  v13.Right = v9;
  v13.Top = v9;
  v13.Near = 1.0;
  v13.Far = flt_A2FF44;
  qmemcpy((char *)this + 0xEC, &v13, 0x1Cu);
  v10 = (NiTPointerList__BSImageSpaceShader *)FormHeapAlloc(0x1Cu);
  LOBYTE(v14) = 4;
  if ( v10 )
    v11 = ImageSpaceshaderList::Create(v10);
  else
    v11 = 0;
  LOBYTE(v14) = 3;
  *((_DWORD *)this + 0x53) = v11;
  j_NiTPointerList::FreeAllNodes(v11);
  return this;
}
