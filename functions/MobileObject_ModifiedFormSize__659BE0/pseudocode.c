__int16 __userpurge MobileObject_ModifiedFormSize@<ax>(TESObjectREFR *this@<ecx>, double st7_0@<st0>, int a3)
{
  __int16 v6; // [esp+Ch] [ebp+4h]

  v6 = TESObjectREFR_GetModifiedSize((TESChildCELL *)this, st7_0, a3) + 1;
  if ( *((_DWORD *)this + 0x16) )
    return (*(int (__thiscall **)(_DWORD, int, TESObjectREFR *))(**((_DWORD **)this + 0x16) + 0x3F0))(
             *((_DWORD *)this + 0x16),
             a3,
             this)
         + v6;
  else
    return v6;
}
