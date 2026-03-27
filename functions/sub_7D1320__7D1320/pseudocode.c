int *__cdecl sub_7D1320(int *a1)
{
  int *shader; // esi
  int *v2; // edi
  int *v3; // ebx
  int *v4; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // eax
  unsigned int i; // ebp
  _DWORD *v15; // edi
  void (__thiscall ***v16)(_DWORD, int); // esi
  int *result; // eax
  double v18; // rt0
  int v19; // [esp+10h] [ebp-18h] BYREF
  int v20; // [esp+14h] [ebp-14h]
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h]
  int v24; // [esp+24h] [ebp-4h]

  shader = (int *)GetShaderDefinition(1u)->shader;
  v2 = (int *)GetShaderDefinition(0xEu)->shader;
  v3 = (int *)GetShaderDefinition(0xFu)->shader;
  v4 = (int *)GetShaderDefinition(0xDu)->shader;
  if ( (unsigned __int16)((_WORD)a1 - 0x18C) > 3u )
  {
    if ( shader )
    {
      sub_55E2A0(shader + 0xB, shader + 0x25);
      sub_55E2A0(shader + 0xC, shader + 0x26);
    }
    if ( v2 )
    {
      sub_55E2A0(v2 + 0xB, v2 + 0x25);
      sub_55E2A0(v2 + 0xC, v2 + 0x26);
    }
    if ( v3 )
    {
      sub_55E2A0(v3 + 0xB, v3 + 0x25);
      sub_55E2A0(v3 + 0xC, v3 + 0x26);
    }
    if ( v4 )
    {
      sub_55E2A0(v4 + 0xB, v4 + 0x25);
      sub_55E2A0(v4 + 0xC, v4 + 0x26);
    }
    if ( ShaderPackage < 2 )
    {
      if ( ShaderPackage == 1 )
        sub_849020((unsigned __int16)a1);
    }
    else
    {
      sub_83AC70((unsigned __int16)a1);
    }
  }
  else
  {
    if ( shader )
    {
      sub_55E2A0(shader + 0xB, shader + 0x23);
      sub_55E2A0(shader + 0xC, shader + 0x24);
    }
    if ( v2 )
    {
      sub_55E2A0(v2 + 0xB, v2 + 0x23);
      sub_55E2A0(v2 + 0xC, v2 + 0x24);
    }
    if ( v3 )
    {
      sub_55E2A0(v3 + 0xB, v3 + 0x23);
      sub_55E2A0(v3 + 0xC, v3 + 0x24);
    }
    if ( v4 )
    {
      sub_55E2A0(v4 + 0xB, v4 + 0x23);
      sub_55E2A0(v4 + 0xC, v4 + 0x24);
    }
  }
  if ( (unsigned __int16)a1 < 0x1A3u )
  {
    v5 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
    if ( !*(_DWORD *)(v5 + 0x30) )
      *(_DWORD *)(v5 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v5 + 0x30), 0x1C, 0, 0);
    if ( ((unsigned __int16)a1 < 0x160u || (unsigned __int16)a1 > 0x164u) && (unsigned __int16)((_WORD)a1 - 0x165) > 2u )
    {
      if ( (unsigned __int16)((_WORD)a1 - 0x10F) > 0x1Au )
      {
        if ( (_WORD)a1 == 0x19E || (_WORD)a1 == 0x19F || (_WORD)a1 == 0xA || (_WORD)a1 == 0xB )
        {
          v7 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
          if ( !*(_DWORD *)(v7 + 0x30) )
            *(_DWORD *)(v7 + 0x30) = sub_772DF0();
          sub_772CD0(*(_DWORD **)(v7 + 0x30), 0xA8, 8, 0);
        }
        else if ( (unsigned __int16)a1 > 2u )
        {
          if ( (_WORD)a1 == 3 )
            sub_76C730((_DWORD *)dword_B455AC, 0xA8, 0, 0);
          else
            sub_76C730(*(_DWORD **)(4 * (unsigned __int16)a1 + 0xB455A0), 0xA8, 7, 0);
        }
        else
        {
          sub_76C730(*(_DWORD **)(4 * (unsigned __int16)a1 + 0xB455A0), 0xA8, 0, 0);
        }
      }
      else
      {
        sub_76C730(*(_DWORD **)(4 * (unsigned __int16)a1 + 0xB455A0), 0xA8, 0xF, 0);
      }
    }
    else
    {
      v6 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
      if ( !*(_DWORD *)(v6 + 0x30) )
        *(_DWORD *)(v6 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v6 + 0x30), 0xA8, 0xF, 0);
    }
    v8 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
    if ( LOWORD(dword_B42EAC) == 4 )
    {
      if ( !*(_DWORD *)(v8 + 0x30) )
        *(_DWORD *)(v8 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v8 + 0x30), 0x34, 1, 0);
      v9 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
      if ( !*(_DWORD *)(v9 + 0x30) )
        *(_DWORD *)(v9 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v9 + 0x30), 0x38, 8, 0);
      v10 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
      if ( !*(_DWORD *)(v10 + 0x30) )
        *(_DWORD *)(v10 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v10 + 0x30), 0x37, 7, 0);
      v11 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
      if ( !*(_DWORD *)(v11 + 0x30) )
        *(_DWORD *)(v11 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v11 + 0x30), 0x35, 1, 0);
      v12 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
      if ( !*(_DWORD *)(v12 + 0x30) )
        *(_DWORD *)(v12 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v12 + 0x30), 0x36, 1, 0);
    }
    else
    {
      if ( !*(_DWORD *)(v8 + 0x30) )
        *(_DWORD *)(v8 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v8 + 0x30), 0x34, 0, 0);
    }
    if ( (_WORD)a1 != 0x17B )
    {
      v13 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
      for ( i = 0; i < *(_DWORD *)(v13 + 0x18); ++i )
      {
        v15 = *(_DWORD **)(*(_DWORD *)(v13 + 0x24) + 4 * i);
        if ( v15 )
        {
          v20 = *sub_75FB10(v15, &v19);
          if ( v19 )
          {
            v16 = (void (__thiscall ***)(_DWORD, int))v19;
            if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
              (**v16)(v16, 1);
          }
          if ( v20 )
          {
            if ( v20 != dword_B43110 && i != 7 )
              sub_7715E0((_DWORD **)v15, 3);
          }
        }
        v13 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0);
      }
    }
  }
  result = a1;
  if ( (_WORD)a1 == 0x77 || (_WORD)a1 == 0x85 )
  {
    *(float *)&v21 = flt_B4313C - CameraWorldTranslate;
    *(float *)&v22 = flt_B43140 - flt_B3F930;
    v18 = dbl_A492F0;
    *(float *)&v23 = flt_B43144 - v18;
    *(float *)&v24 = flt_B43148 - v18;
    sub_7ECAE0(0x20u, v21, v22, v23, v24);
    result = sub_7ECAE0(0x22u, dword_B2C718, dword_B2C71C, dword_B2C720, dword_B2C724);
  }
  if ( (_WORD)a1 == 0x17B )
    return sub_7ECAE0(0x21u, dword_B2C728, dword_B2C72C, dword_B2C730, dword_B2C734);
  return result;
}
