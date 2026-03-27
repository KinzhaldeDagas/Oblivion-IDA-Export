void __cdecl sub_57C240(unsigned int a1, char *a2)
{
  InputGlobal *input; // edx
  UInt8 v3; // cl
  char *v4; // eax
  char **v5; // eax
  char *v6; // ecx
  char *v7; // edx
  char v8; // al
  unsigned __int8 v9; // cl
  char **v10; // eax
  char *v11; // ecx
  char *v12; // edx
  char v13; // al
  unsigned __int8 v14; // al
  char **v15; // eax
  char *v16; // ecx
  char *v17; // edx
  char v18; // al
  char *m_data; // esi
  char *v20; // ecx
  char *v21; // edx
  char v22; // al
  BSStringT v23; // [esp+0h] [ebp-8h] BYREF

  if ( a1 <= 0x1D )
  {
    *a2 = 0;
    input = OSGlobals->input;
    v3 = input->MouseInputControls[a1];
    v4 = (char *)input + a1;
    if ( v3 >= 9u )
    {
      v9 = v4[0x1B7E];
      if ( v9 >= 0xEEu )
      {
        v14 = v4[0x1BB8];
        if ( v14 >= 8u )
        {
LABEL_24:
          v20 = (char *)dword_B38F20;
          v21 = a2;
          do
          {
            v22 = *v20;
            *v21++ = *v20++;
          }
          while ( v22 );
          return;
        }
        v15 = *(char ***)(4 * v14 + 0xB39930);
        if ( v15 )
          v16 = *v15;
        else
          v16 = 0;
        v17 = a2;
        do
        {
          v18 = *v16;
          *v17++ = *v16++;
        }
        while ( v18 );
      }
      else
      {
        v10 = *(char ***)(4 * v9 + 0xB39578);
        if ( v10 )
          v11 = *v10;
        else
          v11 = 0;
        v12 = a2;
        do
        {
          v13 = *v11;
          *v12++ = *v11++;
        }
        while ( v13 );
      }
    }
    else
    {
      v5 = *(char ***)(4 * v3 + 0xB39554);
      if ( v5 )
        v6 = *v5;
      else
        v6 = 0;
      v7 = a2;
      do
      {
        v8 = *v6;
        *v7++ = *v6++;
      }
      while ( v8 );
    }
    if ( *a2 )
    {
      v23.m_data = 0;
      v23.m_dataLen = 0;
      v23.m_bufLen = 0;
      BSStringT_Set(&v23, a2, 0);
      m_data = v23.m_data;
      _sprintf(a2, "%s %s", (const char *)dword_B38F18, v23.m_data);
      FormHeapFree((unsigned int)m_data);
      return;
    }
    goto LABEL_24;
  }
}
