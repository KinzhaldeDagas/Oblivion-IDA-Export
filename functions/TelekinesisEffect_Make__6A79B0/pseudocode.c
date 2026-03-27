ActiveEffect *__cdecl TelekinesisEffect_Make(int a1, int a2, int a3)
{
  ActiveEffect *v3; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x50u);
  if ( v3 )
    return TelekinesisEffect_constr(v3, a1, a2, a3);
  else
    return 0;
}
