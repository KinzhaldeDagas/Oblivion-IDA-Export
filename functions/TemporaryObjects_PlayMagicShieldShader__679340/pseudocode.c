char __thiscall TemporaryObjects_PlayMagicShieldShader(int *this, int a2, int a3)
{
  char v3; // al
  int *v4; // esi
  int v5; // edi
  char v6; // bl
  NodeVoid *v7; // ebx
  int v8; // ebp
  void *v9; // esi
  void (__thiscall ***v10)(void *, int); // edi
  int v11; // edi
  int v12; // ecx
  float v14; // [esp+10h] [ebp-8h]
  void *outData; // [esp+14h] [ebp-4h] BYREF

  v3 = 0; /*0x679346*/
  v4 = this + 0x12; /*0x679348*/
  outData = 0; /*0x67934b*/
  if ( *(this + 0x13) ) /*0x67934f*/
  {
    v5 = a2; /*0x679364*/
  }
  else
  {
    v5 = 0; /*0x679355*/
    v3 = 1; /*0x679359*/
    if ( !*v4 ) /*0x679357*/
    {
      v6 = 1; /*0x679360*/
      goto LABEL_6; /*0x679362*/
    }
  }
  v6 = 0; /*0x679368*/
LABEL_6:
  if ( (v3 & 1) != 0 ) /*0x67936c*/
  {
    if ( v5 ) /*0x679370*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x679376*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x679388*/
    }
  }
  if ( v6 ) /*0x67938c*/
    return 0; /*0x67938c*/
  v7 = (NodeVoid *)v4; /*0x679398*/
  v8 = 0; /*0x67939a*/
  v14 = flt_A32048; /*0x67939c*/
  if ( !v4 ) /*0x6793a2*/
    return 0; /*0x6793a2*/
  do /*0x679445*/
  {
    v9 = *NodeVoid_GetDataAddRef(v7, &outData); /*0x6793b4*/
    if ( outData ) /*0x6793bc*/
    {
      v10 = (void (__thiscall ***)(void *, int))outData; /*0x6793be*/
      if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x6793c4*/
        (**v10)(v10, 1); /*0x6793da*/
    }
    if ( v9 ) /*0x6793de*/
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v9 + 0x54))(v9) == 6 ) /*0x6793ec*/
      {
        v11 = *((_DWORD *)v9 + 6); /*0x6793ee*/
        if ( v11 ) /*0x6793f3*/
        {
          if ( v14 > (double)*((float *)v9 + 4) ) /*0x679403*/
          {
            v12 = *(_DWORD *)(v11 + 0x20); /*0x679405*/
            if ( v12 ) /*0x67940a*/
            {
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12) == a2 /*0x67942b*/
                && Magic_CompareShieldType(a3, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 0xC) + 0x1C) + 0x98)) )
              {
                v8 = (int)v9; /*0x67943a*/
                v14 = *((float *)v9 + 4); /*0x67943c*/
              }
            }
          }
        }
      }
    }
    v7 = v7->next; /*0x679440*/
  }
  while ( v7 ); /*0x679445*/
  if ( !v8 ) /*0x67944d*/
    return 0; /*0x67946f*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x68))(v8); /*0x679457*/
  sub_6A0350(v8); /*0x67945b*/
  return 1; /*0x679460*/
}
