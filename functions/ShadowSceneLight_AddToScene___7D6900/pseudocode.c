void __thiscall ShadowSceneLight_AddToScene____(void *this, _BYTE *a2)
{
  float *v3; // ecx

  if ( a2 )
  {
    v3 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 8))(a2);
    if ( v3 )
    {
      if ( (a2[0x18] & 1) == 0 && 0.0 != v3[0xB] )
        ShadowSceneLight_UpdateLightingProperty((int)this, v3);
    }
  }
}
