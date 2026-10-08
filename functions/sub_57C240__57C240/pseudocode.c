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
  const char *value; // ecx
  char *v21; // edx
  char v22; // al
  BSStringT v23; // [esp+0h] [ebp-8h] BYREF

  if ( a1 <= 0x1D ) /*0x57c24a*/
  {
    *a2 = 0; /*0x57c255*/
    input = MEMORY[0xB33398]->input; /*0x57c25e*/
    v3 = input->MouseInputControls[a1]; /*0x57c261*/
    v4 = (char *)input + a1; /*0x57c268*/
    if ( v3 >= 9u ) /*0x57c26d*/
    {
      v9 = v4[0x1B7E]; /*0x57c295*/
      if ( v9 >= 0xEEu ) /*0x57c29e*/
      {
        v14 = v4[0x1BB8]; /*0x57c2c6*/
        if ( v14 >= 8u ) /*0x57c2ce*/
        {
LABEL_24:
          value = stru_B38F20.value; /*0x57c341*/
          v21 = a2; /*0x57c347*/
          do /*0x57c35c*/
          {
            v22 = *value; /*0x57c350*/
            *v21++ = *value++; /*0x57c352*/
          }
          while ( v22 ); /*0x57c35c*/
          return; /*0x57c35c*/
        }
        v15 = *(char ***)(4 * v14 + 0xB39930); /*0x57c2d3*/
        if ( v15 ) /*0x57c2dc*/
          v16 = *v15; /*0x57c2de*/
        else
          v16 = 0; /*0x57c2e2*/
        v17 = a2; /*0x57c2e4*/
        do /*0x57c2f2*/
        {
          v18 = *v16; /*0x57c2e6*/
          *v17++ = *v16++; /*0x57c2e8*/
        }
        while ( v18 ); /*0x57c2f2*/
      }
      else
      {
        v10 = *(char ***)(4 * v9 + 0xB39578); /*0x57c2a3*/
        if ( v10 ) /*0x57c2ac*/
          v11 = *v10; /*0x57c2ae*/
        else
          v11 = 0; /*0x57c2b2*/
        v12 = a2; /*0x57c2b4*/
        do /*0x57c2c2*/
        {
          v13 = *v11; /*0x57c2b6*/
          *v12++ = *v11++; /*0x57c2b8*/
        }
        while ( v13 ); /*0x57c2c2*/
      }
    }
    else
    {
      v5 = *(char ***)(4 * v3 + 0xB39554); /*0x57c272*/
      if ( v5 ) /*0x57c27b*/
        v6 = *v5; /*0x57c27d*/
      else
        v6 = 0; /*0x57c281*/
      v7 = a2; /*0x57c283*/
      do /*0x57c291*/
      {
        v8 = *v6; /*0x57c285*/
        *v7++ = *v6++; /*0x57c287*/
      }
      while ( v8 ); /*0x57c291*/
    }
    if ( *a2 ) /*0x57c2f4*/
    {
      v23.m_data = 0; /*0x57c301*/
      v23.m_dataLen = 0; /*0x57c309*/
      v23.m_bufLen = 0; /*0x57c310*/
      BSStringT_Set(&v23, a2, 0); /*0x57c317*/
      m_data = v23.m_data; /*0x57c31c*/
      _sprintf(a2, "%s %s", stru_B38F18.value, v23.m_data); /*0x57c32d*/
      FormHeapFree((unsigned int)m_data); /*0x57c333*/
      return; /*0x57c340*/
    }
    goto LABEL_24; /*0x57c2f7*/
  }
}
