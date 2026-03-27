_DWORD *__cdecl sub_584F10(const char *a1, const char *a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  unsigned int v5; // edi
  const char *v6; // eax
  void (__cdecl *v7)(_DWORD *, const char *, unsigned int, unsigned int *, int); // edx
  _DWORD *result; // eax
  int v9; // ebp
  int v10; // esi
  char v11; // al
  char v12; // dl
  unsigned int v13; // edi
  char v14; // cl
  const char *v15; // ecx
  char v16; // bl
  char i; // [esp+Fh] [ebp-119h]
  char v18; // [esp+10h] [ebp-118h]
  char v19; // [esp+11h] [ebp-117h]
  char v20; // [esp+12h] [ebp-116h]
  char v21; // [esp+13h] [ebp-115h]
  unsigned int v22; // [esp+14h] [ebp-114h] BYREF
  const char *v23; // [esp+18h] [ebp-110h]
  unsigned int v24; // [esp+1Ch] [ebp-10Ch]
  CHAR OutputString[260]; // [esp+20h] [ebp-108h] BYREF

  v21 = 0;
  if ( a2 )
  {
    v23 = a2;
    v24 = strlen(a2);
    v5 = v24;
    goto LABEL_8;
  }
  v2 = sub_431130(a1, 0, 0x2800, 4);
  v3 = v2;
  if ( !v2 )
  {
LABEL_6:
    _sprintf(OutputString, "XML : error opening XML file : %s", a1);
    OutputDebugStringA(OutputString);
    return 0;
  }
  v4 = *v2;
  if ( !*((_BYTE *)v3 + 0x24) )
  {
    (*(void (__thiscall **)(_DWORD *, int))v4)(v3, 1);
    goto LABEL_6;
  }
  v5 = (*(int (__thiscall **)(_DWORD *))(v4 + 0x1C))(v3);
  v24 = v5;
  v6 = (const char *)FormHeapAlloc(v5);
  v7 = (void (__cdecl *)(_DWORD *, const char *, unsigned int, unsigned int *, int))v3[1];
  v23 = v6;
  v21 = 1;
  v22 = 1;
  v7(v3, v6, v5, &v22, 1);
  (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1);
LABEL_8:
  v9 = FormHeapAlloc(v5);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  for ( i = 0; v13 < v24; ++v13 )
  {
    v14 = v23[v13];
    if ( !v14 )
      break;
    if ( v14 != 9 && v14 != 0xA && v14 != 0xD )
    {
      if ( v18 )
      {
        if ( v12 == 0x2D && v11 == 0x2D && v14 == 0x3E )
          v18 = 0;
        i = v12;
        v12 = v11;
        v11 = v23[v13];
      }
      else
      {
        if ( v14 == 0x20 )
        {
          if ( v11 == 0x20 || v11 == 0x3E )
            continue;
          goto LABEL_27;
        }
        if ( v11 == 0x20 && (v14 == 0x3C || v14 == 0x3E) )
        {
          --v10;
LABEL_27:
          v15 = v23;
          if ( v22 > 0x186A0 )
          {
            if ( v19 && v23[v13] == 0x3E )
            {
              v20 = 1;
            }
            else if ( v11 == 0x3C && v23[v13] == 0x2F )
            {
              v19 = 1;
            }
          }
          v16 = v23[v13];
          ++v22;
          *(_BYTE *)(v10 + v9) = v16;
          ++v10;
          i = v12;
          v12 = v11;
          v11 = v15[v13];
          if ( v20 )
          {
            *(_BYTE *)(v10 + v9) = 0xA;
            v19 = 0;
            v20 = 0;
            ++v10;
            v22 = 0;
          }
          continue;
        }
        if ( v12 == 0x20 && v11 == 0x2F && v14 == 0x3E )
        {
          *(_BYTE *)(--v10 + v9 - 1) = 0x2F;
          goto LABEL_27;
        }
        if ( i != 0x3C || v12 != 0x21 || v11 != 0x2D || v14 != 0x2D )
          goto LABEL_27;
        v11 = 0;
        v12 = 0;
        i = 0;
        v10 -= 3;
        v18 = 1;
      }
    }
  }
  *(_BYTE *)(v10 + v9) = 0;
  if ( v21 )
    FormHeapFree((unsigned int)v23);
  result = (_DWORD *)FormHeapAlloc(8u);
  if ( !result )
    return 0;
  *result = v10;
  result[1] = v9;
  return result;
}
