// Native receiver-root gate: require a non-null root, non-null world bound, AppCulled clear, and nonzero bound radius, then recurse through ShadowSceneLight_UpdateLightingProperty.
void __thiscall ShadowSceneLight_AddToScene____(void *this, _BYTE *a2)
{
  float *v3; // ecx

  if ( a2 ) /*0x7d690a*/
  {
    v3 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 8))(a2); /*0x7d6915*/
    if ( v3 ) /*0x7d6919*/
    {
      if ( (a2[0x18] & 1) == 0 && 0.0 != v3[0xB] ) /*0x7d692b*/
        ShadowSceneLight_UpdateLightingProperty((int)this, v3); /*0x7d6930*/
    }
  }
}
