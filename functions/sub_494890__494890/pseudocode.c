void __thiscall sub_494890(int *this, const char *a2)
{
  clock_t v3; // eax
  int v4; // edi
  char *v5; // eax
  char v6[20000]; // [esp+8h] [ebp-4E24h] BYREF

  if ( !bSkipInitializationFlows_MESSAGES )
  {
    v3 = clock();
    _sprintf(v6, "%02d%02d%02d: %s", v3 / 0x3E8 / 0x3C % 0x3C, v3 / 0x3E8 % 0x3C, v3 / 0x1F4 % 0x64, a2);
    v4 = *this;
    v5 = sub_4944F0();
    (*(void (__thiscall **)(int *, char *, char *, int))(v4 + 0x28))(this, v5, v6, 1);
  }
}
