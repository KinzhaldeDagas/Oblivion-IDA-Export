//
// [2026-10-06] Return is the recursive helper return, ultimately shader UpdateInternalVars AL at 0x7B80CD. Stock billboard builder 0x562FA1 ignores it. Do not treat zero alone as absence of an installed shader/property; inspect actual resource pointers. v139 plugin incorrectly rejected zero before resource inspection; v140 corrects that guard.
char __cdecl BSShaderManager_AssignShadersRecursive(
        NiAVObject *root,
        unsigned int shaderId,
        char normalMapBypass,
        char arg3)
{
  const char *v4; // eax
  char v5; // bl

  if ( !root ) /*0x7b8947*/
    return 0; /*0x7b898a*/
  NiAVObject_InitializePropertyState(root); /*0x7b894b*/
  v4 = 0; /*0x7b8956*/
  if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1B] ) /*0x7b8950*/
    v4 = (const char *)(*(int (__cdecl **)(NiAVObject *))&OB_RendererGlobalState_010201A0[0x1B])(root); /*0x7b895d*/
  v5 = BSShaderManager_AssignShaderToObjectRecursive(root, shaderId, normalMapBypass, arg3, v4); /*0x7b897e*/
  NiAVObject_InitializePropertyState(root); /*0x7b8980*/
  return v5; /*0x7b8988*/
}
