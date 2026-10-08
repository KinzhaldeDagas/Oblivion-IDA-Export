signed int __thiscall sub_979140(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _BYTE *a11)
{
  signed int result; // eax
  int v13; // eax
  int v14; // eax

  if ( a9 != *(_DWORD *)(this + 0x88) ) /*0x979150*/
  {
    sub_97AEC0((NiPoint3 *)(this + 4), (NiTransform *)(a5 + 0x64)); /*0x97915d*/
    *(_DWORD *)(this + 0x88) = a9; /*0x979162*/
  }
  if ( a10 != *(_DWORD *)(a2 + 0x88) ) /*0x97917a*/
  {
    sub_97AEC0((NiPoint3 *)(a2 + 4), (NiTransform *)(a6 + 0x64)); /*0x979183*/
    *(_DWORD *)(a2 + 0x88) = a10; /*0x979188*/
  }
  result = sub_97AFC0(this + 4, a2 + 4); /*0x979195*/
  if ( result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2) )
    {
      if ( a7 < 0 && a8 < 0 ) /*0x97928d*/
        return sub_978F80((float *)this, *(float *)&a2, a3, a4, a5, a6, a11); /*0x9792b0*/
    }
    else if ( a8 )
    {
      v13 = *(_DWORD *)(a2 + 0x80); /*0x9791c3*/
      if ( v13 || *(_DWORD *)(a2 + 0x84) )
      {
        result = (*(int (__thiscall **)(int, int, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)this + 0xC))( /*0x979209*/
                   this,
                   v13,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8 - 1,
                   a9,
                   a10,
                   a11);
        if ( result < 1 )
        {
          v14 = (*(int (__thiscall **)(int, _DWORD, int, int, int, int, int, int, int, int, _BYTE *))(*(_DWORD *)this + 0xC))( /*0x979247*/
                  this,
                  *(_DWORD *)(a2 + 0x84),
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8 - 1,
                  a9,
                  a10,
                  a11);
          return v14 < 1 ? 0 : v14;
        }
        return result; /*0x97925a*/
      }
    }
    return sub_97A530(this, a2, a3, a4, a5, a6, a11); /*0x9792cb*/
  }
  return result; /*0x97919e*/
}
