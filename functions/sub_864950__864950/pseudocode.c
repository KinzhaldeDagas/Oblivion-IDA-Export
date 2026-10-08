// MoonSugarEffect decode: ParallaxShader detailed pass population dispatcher. Calls class slots +0xC4..+0xD8 to build/populate subsets of the 0x3C Parallax pass table.
int __thiscall sub_864950(void *this)
{
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xC4))(this); /*0x86495b*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xC8))(this); /*0x864967*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xCC))(this); /*0x864973*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xD0))(this); /*0x86497f*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0xD4))(this); /*0x86498b*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xD8))(this);
}
