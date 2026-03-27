int __thiscall sub_7AA550(_DWORD *this, int (__cdecl *a2)(_DWORD *, _DWORD *))
{
  _DWORD *v2; // esi
  int result; // eax
  _DWORD *v4; // edi
  unsigned int v5; // edx
  _DWORD *v6; // ecx
  int v7; // ebx
  unsigned int v8; // eax
  _DWORD *i; // esi
  int v10; // ebp
  _DWORD *v11; // eax
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-10h]
  int v14; // [esp+8h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-8h]

  v2 = this;
  sub_7A9C30((int)this);
  result = 0;
  if ( v2[1] )
  {
    v14 = 1;
    while ( 1 )
    {
      v4 = (_DWORD *)v2[1];
      v5 = v14;
      v6 = 0;
      v2[1] = 0;
      v13 = 0;
      v15 = 0;
      if ( !v4 )
        goto LABEL_24;
      do
      {
        ++v15;
        v7 = 0;
        v8 = 0;
        for ( i = v4; v8 < v5; ++v8 )
        {
          i = (_DWORD *)*i;
          ++v7;
          if ( !i )
            break;
        }
        v10 = v5;
        while ( 1 )
        {
          if ( v7 > 0 )
            goto LABEL_13;
          if ( v10 <= 0 || !i )
            break;
          if ( !v7 )
          {
            v11 = i;
            i = (_DWORD *)*i;
            --v10;
            goto LABEL_18;
          }
LABEL_13:
          if ( v10 && i && (v12 = a2(v4 + 2, i + 2), v6 = v13, v12 > 0) )
          {
            v11 = i;
            i = (_DWORD *)*i;
            --v10;
          }
          else
          {
            v11 = v4;
            v4 = (_DWORD *)*v4;
            --v7;
          }
LABEL_18:
          if ( v6 )
          {
            v5 = v14;
            *v6 = v11;
            v11[1] = v6;
          }
          else
          {
            *(this + 1) = v11;
            v5 = v14;
            v11[1] = 0;
          }
          v13 = v11;
          v6 = v11;
        }
        v4 = i;
      }
      while ( i );
      v2 = this;
LABEL_24:
      result = 0;
      *v6 = 0;
      v14 = 2 * v5;
      if ( v15 == 1 )
      {
        v2[2] = v6;
        return result;
      }
    }
  }
  return result;
}
