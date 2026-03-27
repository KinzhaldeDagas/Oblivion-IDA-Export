void __thiscall BSCubeMapCamera::~BSCubeMapCamera(BSCubeMapCamera *this)
{
  int *v2; // edi
  int v3; // ebx
  int v4; // esi
  int v5; // esi
  LONG (__stdcall *v6)(volatile LONG *); // edi
  unsigned int v7; // esi
  int v8; // esi
  int v9; // esi

  *(_DWORD *)this = &BSCubeMapCamera::`vftable';
  v2 = (int *)((char *)this + 0x128);
  v3 = 6;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      *v2 = 0;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  v5 = *((_DWORD *)this + 0x50);
  v6 = InterlockedDecrement;
  if ( v5 )
  {
    if ( !v6((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x50) = 0;
  }
  v7 = *((_DWORD *)this + 0x53);
  if ( v7 )
  {
    ImageSpaceShaderList::Destroy(*((NiTPointerList__BSImageSpaceShader **)this + 0x53));
    FormHeapFree(v7);
    *((_DWORD *)this + 0x53) = 0;
  }
  v8 = *((_DWORD *)this + 0x52);
  if ( v8 )
  {
    if ( !v6((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *((_DWORD *)this + 0x50);
  if ( v9 )
  {
    if ( !v6((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  _LN21((char *)this + 0x128, 4u, 6, (void (__thiscall *)(void *))sub_7016A0);
  DestroyNiCamera_((NiAVObject *)this);
}
