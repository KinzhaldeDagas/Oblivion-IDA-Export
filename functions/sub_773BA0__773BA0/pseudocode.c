int __stdcall sub_773BA0(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  int v4; // ebx
  NiDevImageConverter *v5; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  _DWORD *v9; // ebp
  int v10; // ebx
  _DWORD *v11; // ebp
  int v12; // kr00_4
  _DWORD *v13; // ebx
  int v14; // ebp
  int v15; // ebp
  int v16; // ebp
  unsigned int v17; // eax
  int v18; // ebp
  int v19; // [esp+48h] [ebp-8h] BYREF
  int v20; // [esp+4Ch] [ebp-4h] BYREF

  v3 = (_DWORD *)a1;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = sub_71B280();
  if ( v3[2] )
    return 0;
  v7 = a2;
  v8 = *a2;
  if ( *a2 == 4 )
  {
    if ( v4 == 9 || v4 == 1 )
    {
      v11 = a3;
      v10 = a3[0xD];
      if ( v10
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
             v5,
             v3,
             a3[0xD]) )
      {
        return v10;
      }
      v10 = v11[0xC];
LABEL_15:
      if ( v10
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, int))(*(_DWORD *)v5 + 0xC))(v5, v3, v10) )
      {
        return v10;
      }
      v10 = v11[0xB];
    }
    else
    {
      v9 = a3;
LABEL_7:
      v10 = v9[0xB];
      if ( v10
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
             v5,
             v3,
             v9[0xB]) )
      {
        return v10;
      }
      v10 = v9[0xD];
      if ( v10 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v9[0xD]) )
        {
          return v10;
        }
      }
      v10 = v9[0xC];
    }
LABEL_133:
    if ( !v10 )
      return 0;
    goto LABEL_145;
  }
  v12 = v4;
  v13 = a3;
  switch ( v12 )
  {
    case 0:
    case 2:
      if ( v8 != 3 )
        goto LABEL_27;
      v14 = a3[8];
      if ( v14
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
             v5,
             v3,
             a3[8]) )
      {
        return v14;
      }
      v14 = v13[9];
      if ( v14 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[9]) )
        {
          return v14;
        }
      }
      v14 = v13[0xA];
      if ( v14 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[0xA]) )
        {
          return v14;
        }
      }
      v7 = a2;
LABEL_27:
      if ( *v7 == 1 )
      {
        v14 = v13[1];
        if ( v14
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[1]) )
        {
          return v14;
        }
        v14 = *v13;
        if ( *v13 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 *v13) )
          {
            return v14;
          }
        }
        v14 = v13[2];
        if ( v14 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[2]) )
          {
            return v14;
          }
        }
        v15 = v13[5];
        if ( v15
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[5]) )
        {
          return v15;
        }
      }
      else
      {
        v14 = v13[2];
        if ( v14
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[2]) )
        {
          return v14;
        }
        v14 = v13[5];
        if ( v14 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[5]) )
          {
            return v14;
          }
        }
        v14 = v13[1];
        if ( v14 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[1]) )
          {
            return v14;
          }
        }
        v14 = *v13;
        if ( *v13 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 *v13) )
          {
            return v14;
          }
        }
      }
      v14 = v13[3];
      if ( !v14
        || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
              v5,
              v3,
              v13[3]) )
      {
        v10 = v13[4];
        goto LABEL_133;
      }
      return v14;
    case 1:
    case 3:
    case 0xC:
    case 0xD:
    case 0xE:
      goto LABEL_68;
    case 4:
      if ( v8 == 1 || v8 == 2 )
        goto LABEL_68;
      v16 = a3[8];
      goto LABEL_63;
    case 5:
      if ( v8 == 1 || v8 == 2 )
        goto LABEL_68;
      v16 = a3[9];
      goto LABEL_63;
    case 6:
      if ( v8 == 1 || v8 == 2 )
        goto LABEL_68;
      v16 = a3[0xA];
      goto LABEL_63;
    case 8:
      v9 = a3;
      goto LABEL_7;
    case 9:
      v11 = a3;
      v10 = a3[0xC];
      if ( v10
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, int))(*(_DWORD *)v5 + 0xC))(v5, v3, v10) )
      {
        return v10;
      }
      v10 = v11[0xD];
      goto LABEL_15;
    case 0xB:
      if ( a2[1] == 2 )
      {
        v16 = a3[0xF];
LABEL_63:
        if ( v16
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, int))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v16) )
        {
          return v16;
        }
      }
      else
      {
        v14 = a3[0xE];
        if ( v14
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               a3[0xE]) )
        {
          return v14;
        }
      }
LABEL_68:
      v20 = 0x13;
      v19 = 5;
      LOBYTE(a3) = 0;
      if ( !sub_773870(v3, 0, &v20, &v19, &a3, &a1) || v19 != 2 && v19 != 1 )
        goto LABEL_106;
      v17 = sub_7738C0(v3);
      a1 = v17;
      if ( (_BYTE)a3 == 0x10 )
      {
        if ( v17 < 2 )
        {
          v14 = v13[0x10];
          if ( v14
            && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[0x10]) )
          {
            return v14;
          }
          v14 = v13[0x13];
          if ( v14 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[0x13]) )
            {
              return v14;
            }
          }
          v17 = a1;
        }
        if ( v17 >= 3
          || ((v14 = v13[0x11]) == 0
           || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[0x11]))
          && ((v14 = v13[0x14]) == 0
           || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[0x14])) )
        {
          v14 = v13[0x12];
          if ( !v14
            || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                  v5,
                  v3,
                  v13[0x12]) )
          {
            v18 = v13[0x15];
            if ( v18
              && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[0x15]) )
            {
              return v18;
            }
            goto LABEL_106;
          }
        }
        return v14;
      }
      if ( (_BYTE)a3 == 0x20 )
      {
        if ( v17 < 2 )
        {
          v14 = v13[0x13];
          if ( v14
            && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[0x13]) )
          {
            return v14;
          }
          v17 = a1;
        }
        if ( v17 < 3 )
        {
          v14 = v13[0x14];
          if ( v14 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[0x14]) )
            {
              return v14;
            }
          }
        }
        v14 = v13[0x15];
        if ( v14 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[0x15]) )
          {
            return v14;
          }
        }
        if ( a1 < 2 )
        {
          v14 = v13[0x10];
          if ( v14 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[0x10]) )
            {
              return v14;
            }
          }
        }
        if ( a1 < 3 )
        {
          v14 = v13[0x11];
          if ( v14 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[0x11]) )
            {
              return v14;
            }
          }
        }
        v14 = v13[0x12];
        if ( v14 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[0x12]) )
          {
            return v14;
          }
        }
      }
LABEL_106:
      if ( *a2 == 3 )
      {
        if ( a2[1] == 1 )
        {
          v14 = v13[8];
          if ( v14
            && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[8]) )
          {
            return v14;
          }
          v14 = v13[9];
          if ( v14 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[9]) )
            {
              return v14;
            }
          }
          v14 = v13[0xA];
          if ( v14 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[0xA]) )
            {
              return v14;
            }
          }
        }
        else
        {
          v14 = v13[9];
          if ( v14
            && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[9]) )
          {
            return v14;
          }
          v14 = v13[0xA];
          if ( v14 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[0xA]) )
            {
              return v14;
            }
          }
          v14 = v13[8];
          if ( v14 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[8]) )
            {
              return v14;
            }
          }
        }
      }
      if ( *a2 == 1 )
      {
        if ( a2[1] == 1 )
        {
          v14 = v13[3];
          if ( !v14
            || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                  v5,
                  v3,
                  v13[3]) )
          {
            v14 = v13[4];
            if ( !v14
              || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                    v5,
                    v3,
                    v13[4]) )
            {
              v10 = v13[5];
              goto LABEL_133;
            }
          }
        }
        else
        {
          v14 = v13[4];
          if ( !v14
            || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                  v5,
                  v3,
                  v13[4]) )
          {
            v14 = v13[5];
            if ( !v14
              || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                    v5,
                    v3,
                    v13[5]) )
            {
              v10 = v13[3];
              goto LABEL_133;
            }
          }
        }
        return v14;
      }
      v14 = v13[5];
      if ( v14
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
             v5,
             v3,
             v13[5]) )
      {
        return v14;
      }
      if ( a2[1] == 1 )
      {
        v14 = v13[3];
        if ( v14
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[3]) )
        {
          return v14;
        }
        v10 = v13[4];
      }
      else
      {
        v14 = v13[4];
        if ( v14
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[4]) )
        {
          return v14;
        }
        v10 = v13[3];
      }
      if ( !v10 )
        return 0;
LABEL_145:
      if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, int))(*(_DWORD *)v5 + 0xC))(v5, v3, v10) )
        return v10;
      return 0;
    default:
      return 0;
  }
}
