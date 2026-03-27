char *__thiscall sub_942CB0(char **this, unsigned int a2, unsigned __int8 *a3)
{
  char *v5; // [esp+8h] [ebp-4h] BYREF

  v5 = 0;
  if ( sub_8B0F40((int *)this, a2, &v5) == 1 )
  {
    v5 = sub_9531A0(a2, (int)dword_BA8788);
    sub_90C290(a3, v5);
    sub_8B0E80(this, a2, (int)v5);
  }
  return v5;
}
