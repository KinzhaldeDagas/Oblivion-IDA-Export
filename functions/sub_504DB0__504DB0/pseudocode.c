double __usercall sub_504DB0@<st0>(double result@<st0>, int a2, int a3, void *a4)
{
  int *v4; // eax
  int *v5; // esi
  int v6; // edi
  float v7; // [esp+18h] [ebp+Ch]

  if ( a4 )
  {
    v4 = (int *)OblivionDynamicCast(
                  a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
    v5 = v4;
    if ( v4 )
    {
      v6 = *v4;
      (*(void (__thiscall **)(int *))(*v4 + 0x250))(v4);
      v7 = result * dbl_A3D360;
      (*(void (__thiscall **)(int *, _DWORD))(v6 + 0x254))(v5, LODWORD(v7));
      return v7;
    }
  }
  return result;
}
