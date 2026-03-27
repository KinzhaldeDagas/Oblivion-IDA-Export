int __thiscall sub_6F0160(int *this, int a2, int a3, unsigned int a4, int *a5)
{
  int result; // eax
  int v7; // ebx
  __int16 v8; // dx
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  unsigned int v20; // edi
  int v21; // [esp-1Ch] [ebp-48h]
  int v22; // [esp-Ch] [ebp-38h]
  int v23; // [esp-8h] [ebp-34h]
  int v24; // [esp+0h] [ebp-2Ch] BYREF
  int v25; // [esp+10h] [ebp-1Ch] BYREF
  __int16 v26; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  int *v28; // [esp+1Ch] [ebp-10h]
  int v29; // [esp+28h] [ebp-4h]
  int v30; // [esp+3Ch] [ebp+10h]
  int v31; // [esp+40h] [ebp+14h]
  int v32; // [esp+40h] [ebp+14h]

  v28 = &v24;
  result = (int)a5;
  v7 = *(this + 1);
  v8 = *((_WORD *)a5 + 2);
  v25 = *a5;
  v26 = v8;
  if ( v7 )
  {
    result = 0x2AAAAAAB * (*(this + 3) - v7);
    v9 = (*(this + 3) - v7) / 6;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
  {
    if ( v7 )
      v10 = (*(this + 2) - v7) / 6;
    else
      v10 = 0;
    if ( 0xFFFFFFFF - v10 < a4 )
      sub_790B90();
    if ( v7 )
      v11 = (*(this + 2) - v7) / 6;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v19 = *(this + 2);
      v32 = v19;
      if ( (v19 - a3) / 6 >= a4 )
      {
        v20 = 6 * a4;
        v30 = v19 - 6 * a4;
        *(this + 2) = sub_6F0130(v30, v19, v19);
        sub_6F0100(a3, v30, v32);
        return sub_6F0090(a3, a3 + v20, (int)&v25);
      }
      else
      {
        sub_6F0130(a3, v19, a3 + 6 * a4);
        v23 = a4 - (*(this + 2) - a3) / 6;
        v22 = *(this + 2);
        v29 = 2;
        sub_6F00C0(v22, v23, (int)&v25);
        *(this + 2) += 6 * a4;
        return sub_6F0090(a3, *(this + 2) - 6 * a4, (int)&v25);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( v7 )
        v13 = (*(this + 2) - v7) / 6;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + sub_54F700(this);
      v27 = 6 * v12;
      v31 = FormHeapAlloc(6 * v12);
      v21 = *(this + 1);
      v29 = 0;
      v14 = sub_5567D0(v21, a3, v31);
      v15 = sub_6F00C0(v14, a4, (int)&v25);
      sub_5567D0(a3, *(this + 2), v15);
      v16 = *(this + 1);
      if ( v16 )
        v17 = (*(this + 2) - v16) / 6;
      else
        v17 = 0;
      v18 = v17 + a4;
      if ( v16 )
        FormHeapFree(*(this + 1));
      *(this + 3) = v31 + v27;
      *(this + 2) = v31 + 6 * v18;
      *(this + 1) = v31;
      return v31;
    }
  }
  return result;
}
