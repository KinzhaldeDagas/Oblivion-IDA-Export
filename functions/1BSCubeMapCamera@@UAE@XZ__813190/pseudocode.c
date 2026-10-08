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

  *(_DWORD *)this = &BSCubeMapCamera::`vftable'; /*0x8131bb*/
  v2 = (int *)((char *)this + 0x128); /*0x8131ca*/
  v3 = 6; /*0x8131d0*/
  do /*0x813203*/
  {
    v4 = *v2; /*0x8131d5*/
    if ( *v2 ) /*0x8131d5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x8131df*/
      {
        if ( v4 ) /*0x8131eb*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8131f5*/
      }
      *v2 = 0; /*0x8131f7*/
    }
    ++v2; /*0x8131fd*/
    --v3; /*0x813200*/
  }
  while ( v3 ); /*0x813203*/
  v5 = *((_DWORD *)this + 0x50); /*0x813205*/
  v6 = InterlockedDecrement; /*0x81320d*/
  if ( v5 ) /*0x813213*/
  {
    if ( !v6((volatile LONG *)(v5 + 4)) ) /*0x813219*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x81322b*/
    *((_DWORD *)this + 0x50) = 0; /*0x81322d*/
  }
  v7 = *((_DWORD *)this + 0x53); /*0x813237*/
  if ( v7 ) /*0x81323f*/
  {
    ImageSpaceShaderList::Destroy(*((NiTPointerList__BSImageSpaceShader **)this + 0x53)); /*0x813243*/
    FormHeapFree(v7); /*0x813249*/
    *((_DWORD *)this + 0x53) = 0; /*0x813251*/
  }
  v8 = *((_DWORD *)this + 0x52); /*0x81325b*/
  if ( v8 ) /*0x813268*/
  {
    if ( !v6((volatile LONG *)(v8 + 4)) ) /*0x81326e*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x813280*/
  }
  v9 = *((_DWORD *)this + 0x50); /*0x813282*/
  if ( v9 ) /*0x81328f*/
  {
    if ( !v6((volatile LONG *)(v9 + 4)) ) /*0x813295*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8132a7*/
  }
  _LN21((char *)this + 0x128, 4u, 6, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x8132be*/
  DestroyNiCamera_((NiAVObject *)this); /*0x8132cd*/
}
