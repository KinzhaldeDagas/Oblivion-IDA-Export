_DWORD **__cdecl sub_68FA90(int a1)
{
  _DWORD **result; // eax
  _DWORD *v2; // edi
  int i; // esi

  result = (_DWORD **)a1;
  if ( a1 )
    v2 = *(_DWORD **)(a1 + 8);
  else
    v2 = 0;
  for ( i = 0; i < v2[0x29]; ++i )
  {
    result = (_DWORD **)OblivionDynamicCast(
                          *(void **)(v2[0x28] + 4 * i),
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&hkEntityActivationListener `RTTI Type Descriptor',
                          &bhkTelekinesisListener `RTTI Type Descriptor',
                          0);
    if ( result )
    {
      result = (_DWORD **)sub_68FA00(result, v2);
      i = 0;
    }
  }
  return result;
}
