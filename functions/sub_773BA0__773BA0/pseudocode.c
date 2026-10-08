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

  v3 = (_DWORD *)a1; /*0x773ba6*/
  v4 = *(_DWORD *)(a1 + 4); /*0x773baa*/
  v5 = sub_71B280(); /*0x773bb6*/
  if ( v3[2] ) /*0x773bb2*/
    return 0; /*0x773bc2*/
  v7 = a2; /*0x773bc5*/
  v8 = *a2; /*0x773bc9*/
  if ( *a2 == 4 ) /*0x773bcf*/
  {
    if ( v4 == 9 || v4 == 1 ) /*0x773bdd*/
    {
      v11 = a3; /*0x773c1f*/
      v10 = a3[0xD]; /*0x773c23*/
      if ( v10 /*0x773c33*/
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
             v5,
             v3,
             a3[0xD]) )
      {
        return v10; /*0x773c33*/
      }
      v10 = v11[0xC]; /*0x773c3d*/
LABEL_15:
      if ( v10 /*0x773c4d*/
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, int))(*(_DWORD *)v5 + 0xC))(v5, v3, v10) )
      {
        return v10; /*0x773c51*/
      }
      v10 = v11[0xB]; /*0x773c57*/
    }
    else
    {
      v9 = a3; /*0x773bdf*/
LABEL_7:
      v10 = v9[0xB]; /*0x773be3*/
      if ( v10 /*0x773bf3*/
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
             v5,
             v3,
             v9[0xB]) )
      {
        return v10; /*0x773bf3*/
      }
      v10 = v9[0xD]; /*0x773bfd*/
      if ( v10 ) /*0x773c02*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773c0d*/
               v5,
               v3,
               v9[0xD]) )
        {
          return v10; /*0x773c11*/
        }
      }
      v10 = v9[0xC]; /*0x773c17*/
    }
LABEL_133:
    if ( !v10 ) /*0x774179*/
      return 0; /*0x774179*/
    goto LABEL_145; /*0x774179*/
  }
  v12 = v4; /*0x773c5f*/
  v13 = a3; /*0x773c6f*/
  switch ( v12 ) /*0x773c73*/
  {
    case 0: /*0x773c73*/
    case 2: /*0x773c73*/
      if ( v8 != 3 ) /*0x773c7d*/
        goto LABEL_27; /*0x773c7d*/
      v14 = a3[8]; /*0x773c7f*/
      if ( v14 /*0x773c8f*/
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
             v5,
             v3,
             a3[8]) )
      {
        return v14; /*0x773c8f*/
      }
      v14 = v13[9]; /*0x773c99*/
      if ( v14 ) /*0x773c9e*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773ca9*/
               v5,
               v3,
               v13[9]) )
        {
          return v14; /*0x773ca9*/
        }
      }
      v14 = v13[0xA]; /*0x773cb3*/
      if ( v14 ) /*0x773cb8*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773cc3*/
               v5,
               v3,
               v13[0xA]) )
        {
          return v14; /*0x773cc7*/
        }
      }
      v7 = a2; /*0x773ccd*/
LABEL_27:
      if ( *v7 == 1 ) /*0x773cd4*/
      {
        v14 = v13[1]; /*0x773cd6*/
        if ( v14 /*0x773ce6*/
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[1]) )
        {
          return v14; /*0x773ce6*/
        }
        v14 = *v13; /*0x773cf0*/
        if ( *v13 ) /*0x773cf0*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773cff*/
                 v5,
                 v3,
                 *v13) )
          {
            return v14; /*0x773cff*/
          }
        }
        v14 = v13[2]; /*0x773d09*/
        if ( v14 ) /*0x773d0e*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773d19*/
                 v5,
                 v3,
                 v13[2]) )
          {
            return v14; /*0x773d1d*/
          }
        }
        v15 = v13[5]; /*0x773d23*/
        if ( v15 /*0x773d37*/
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[5]) )
        {
          return v15; /*0x773d46*/
        }
      }
      else
      {
        v14 = v13[2]; /*0x773d49*/
        if ( v14 /*0x773d59*/
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[2]) )
        {
          return v14; /*0x773d59*/
        }
        v14 = v13[5]; /*0x773d63*/
        if ( v14 ) /*0x773d68*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773d73*/
                 v5,
                 v3,
                 v13[5]) )
          {
            return v14; /*0x773d73*/
          }
        }
        v14 = v13[1]; /*0x773d7d*/
        if ( v14 ) /*0x773d82*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773d8d*/
                 v5,
                 v3,
                 v13[1]) )
          {
            return v14; /*0x773d8d*/
          }
        }
        v14 = *v13; /*0x773d97*/
        if ( *v13 ) /*0x773d97*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773da6*/
                 v5,
                 v3,
                 *v13) )
          {
            return v14; /*0x773daa*/
          }
        }
      }
      v14 = v13[3]; /*0x773db0*/
      if ( !v14 /*0x773dc0*/
        || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
              v5,
              v3,
              v13[3]) )
      {
        v10 = v13[4]; /*0x773dca*/
        goto LABEL_133; /*0x773dcd*/
      }
      return v14; /*0x773dc4*/
    case 1: /*0x773c73*/
    case 3: /*0x773c73*/
    case 0xC: /*0x773c73*/
    case 0xD: /*0x773c73*/
    case 0xE: /*0x773c73*/
      goto LABEL_68;
    case 4: /*0x773c73*/
      if ( v8 == 1 || v8 == 2 ) /*0x773dde*/
        goto LABEL_68; /*0x773dde*/
      v16 = a3[8]; /*0x773de4*/
      goto LABEL_63; /*0x773de7*/
    case 5: /*0x773c73*/
      if ( v8 == 1 || v8 == 2 ) /*0x773df5*/
        goto LABEL_68; /*0x773df5*/
      v16 = a3[9]; /*0x773dfb*/
      goto LABEL_63; /*0x773dfe*/
    case 6: /*0x773c73*/
      if ( v8 == 1 || v8 == 2 ) /*0x773e08*/
        goto LABEL_68; /*0x773e08*/
      v16 = a3[0xA]; /*0x773e0a*/
      goto LABEL_63; /*0x773e0d*/
    case 8: /*0x773c73*/
      v9 = a3; /*0x773e0f*/
      goto LABEL_7; /*0x773e11*/
    case 9: /*0x773c73*/
      v11 = a3; /*0x773e16*/
      v10 = a3[0xC]; /*0x773e18*/
      if ( v10 /*0x773e28*/
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, int))(*(_DWORD *)v5 + 0xC))(v5, v3, v10) )
      {
        return v10; /*0x773e2c*/
      }
      v10 = v11[0xD]; /*0x773e32*/
      goto LABEL_15; /*0x773e35*/
    case 0xB: /*0x773c73*/
      if ( a2[1] == 2 ) /*0x773e3e*/
      {
        v16 = a3[0xF]; /*0x773e40*/
LABEL_63:
        if ( v16 /*0x773e50*/
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, int))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v16) )
        {
          return v16; /*0x773e5f*/
        }
      }
      else
      {
        v14 = a3[0xE]; /*0x773e62*/
        if ( v14 /*0x773e72*/
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               a3[0xE]) )
        {
          return v14; /*0x773e76*/
        }
      }
LABEL_68:
      v20 = 0x13; /*0x773e7c*/
      v19 = 5; /*0x773e9c*/
      LOBYTE(a3) = 0; /*0x773ea4*/
      if ( !sub_773870(v3, 0, &v20, &v19, &a3, &a1) || v19 != 2 && v19 != 1 ) /*0x773ec2*/
        goto LABEL_106; /*0x773ec2*/
      v17 = sub_7738C0(v3); /*0x773eca*/
      a1 = v17; /*0x773ed6*/
      if ( (_BYTE)a3 == 0x10 ) /*0x773eda*/
      {
        if ( v17 < 2 ) /*0x773ee3*/
        {
          v14 = v13[0x10]; /*0x773ee5*/
          if ( v14 /*0x773ef5*/
            && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[0x10]) )
          {
            return v14; /*0x773ef5*/
          }
          v14 = v13[0x13]; /*0x773eff*/
          if ( v14 ) /*0x773f04*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773f0f*/
                   v5,
                   v3,
                   v13[0x13]) )
            {
              return v14; /*0x773f13*/
            }
          }
          v17 = a1; /*0x773f19*/
        }
        if ( v17 >= 3 /*0x773f4c*/
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
          v14 = v13[0x12]; /*0x773f56*/
          if ( !v14 /*0x773f66*/
            || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                  v5,
                  v3,
                  v13[0x12]) )
          {
            v18 = v13[0x15]; /*0x773f70*/
            if ( v18 /*0x773f84*/
              && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                   v5,
                   v3,
                   v13[0x15]) )
            {
              return v18; /*0x773f97*/
            }
            goto LABEL_106; /*0x773f88*/
          }
        }
        return v14; /*0x7740b3*/
      }
      if ( (_BYTE)a3 == 0x20 ) /*0x773f9d*/
      {
        if ( v17 < 2 ) /*0x773fa6*/
        {
          v14 = v13[0x13]; /*0x773fa8*/
          if ( v14 /*0x773fb8*/
            && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[0x13]) )
          {
            return v14; /*0x773fbc*/
          }
          v17 = a1; /*0x773fc2*/
        }
        if ( v17 < 3 ) /*0x773fc9*/
        {
          v14 = v13[0x14]; /*0x773fcb*/
          if ( v14 ) /*0x773fd0*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773fdb*/
                   v5,
                   v3,
                   v13[0x14]) )
            {
              return v14; /*0x773fdb*/
            }
          }
        }
        v14 = v13[0x15]; /*0x773fe5*/
        if ( v14 ) /*0x773fea*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x773ff5*/
                 v5,
                 v3,
                 v13[0x15]) )
          {
            return v14; /*0x773ff5*/
          }
        }
        if ( a1 < 2 ) /*0x774004*/
        {
          v14 = v13[0x10]; /*0x774006*/
          if ( v14 ) /*0x77400b*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x774016*/
                   v5,
                   v3,
                   v13[0x10]) )
            {
              return v14; /*0x774016*/
            }
          }
        }
        if ( a1 < 3 ) /*0x774025*/
        {
          v14 = v13[0x11]; /*0x774027*/
          if ( v14 ) /*0x77402c*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x774037*/
                   v5,
                   v3,
                   v13[0x11]) )
            {
              return v14; /*0x774037*/
            }
          }
        }
        v14 = v13[0x12]; /*0x77403d*/
        if ( v14 ) /*0x774042*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x77404d*/
                 v5,
                 v3,
                 v13[0x12]) )
          {
            return v14; /*0x774051*/
          }
        }
      }
LABEL_106:
      if ( *a2 == 3 ) /*0x77405a*/
      {
        if ( a2[1] == 1 ) /*0x774066*/
        {
          v14 = v13[8]; /*0x774068*/
          if ( v14 /*0x774078*/
            && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[8]) )
          {
            return v14; /*0x774078*/
          }
          v14 = v13[9]; /*0x77407e*/
          if ( v14 ) /*0x774083*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x77408e*/
                   v5,
                   v3,
                   v13[9]) )
            {
              return v14; /*0x77408e*/
            }
          }
          v14 = v13[0xA]; /*0x774094*/
          if ( v14 ) /*0x774099*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x7740a4*/
                   v5,
                   v3,
                   v13[0xA]) )
            {
              return v14; /*0x7740a8*/
            }
          }
        }
        else
        {
          v14 = v13[9]; /*0x7740b6*/
          if ( v14 /*0x7740c6*/
            && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                 v5,
                 v3,
                 v13[9]) )
          {
            return v14; /*0x7740c6*/
          }
          v14 = v13[0xA]; /*0x7740cc*/
          if ( v14 ) /*0x7740d1*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x7740dc*/
                   v5,
                   v3,
                   v13[0xA]) )
            {
              return v14; /*0x7740dc*/
            }
          }
          v14 = v13[8]; /*0x7740e2*/
          if ( v14 ) /*0x7740e7*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))( /*0x7740f2*/
                   v5,
                   v3,
                   v13[8]) )
            {
              return v14; /*0x7740f6*/
            }
          }
        }
      }
      if ( *a2 == 1 ) /*0x7740ff*/
      {
        if ( a2[1] == 1 ) /*0x774109*/
        {
          v14 = v13[3]; /*0x77410b*/
          if ( !v14 /*0x77411b*/
            || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                  v5,
                  v3,
                  v13[3]) )
          {
            v14 = v13[4]; /*0x774121*/
            if ( !v14 /*0x774131*/
              || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                    v5,
                    v3,
                    v13[4]) )
            {
              v10 = v13[5]; /*0x77413b*/
              goto LABEL_133; /*0x77413e*/
            }
          }
        }
        else
        {
          v14 = v13[4]; /*0x774140*/
          if ( !v14 /*0x774150*/
            || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                  v5,
                  v3,
                  v13[4]) )
          {
            v14 = v13[5]; /*0x77415a*/
            if ( !v14 /*0x77416a*/
              || !(*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
                    v5,
                    v3,
                    v13[5]) )
            {
              v10 = v13[3]; /*0x774174*/
              goto LABEL_133; /*0x774174*/
            }
          }
        }
        return v14; /*0x774135*/
      }
      v14 = v13[5]; /*0x77418c*/
      if ( v14 /*0x77419c*/
        && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
             v5,
             v3,
             v13[5]) )
      {
        return v14; /*0x7741a0*/
      }
      if ( a2[1] == 1 ) /*0x7741ae*/
      {
        v14 = v13[3]; /*0x7741b0*/
        if ( v14 /*0x7741c0*/
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[3]) )
        {
          return v14; /*0x7741c4*/
        }
        v10 = v13[4]; /*0x7741ca*/
      }
      else
      {
        v14 = v13[4]; /*0x7741cf*/
        if ( v14 /*0x7741df*/
          && (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, _DWORD))(*(_DWORD *)v5 + 0xC))(
               v5,
               v3,
               v13[4]) )
        {
          return v14; /*0x7741e3*/
        }
        v10 = v13[3]; /*0x7741e9*/
      }
      if ( !v10 ) /*0x7741ee*/
        return 0; /*0x7741ee*/
LABEL_145:
      if ( (*(unsigned __int8 (__thiscall **)(NiDevImageConverter *, _DWORD *, int))(*(_DWORD *)v5 + 0xC))(v5, v3, v10) ) /*0x7741f9*/
        return v10; /*0x774208*/
      return 0;
    default:
      return 0;
  }
}
