// Returns the serialized actor-animation block size including its 2-byte length prefix. Null animation data or actors excluded by virtual predicate +0x198 serialize only the zero-length prefix.
signed __int16 __cdecl sub_473BF0(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x473bfd*/
    return 2; /*0x473c29*/
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0) ) /*0x473c10*/
    return 2; /*0x473c30*/
  return ActorAnimData_GetSaveStateSize(a2, a1) + 2; /*0x473c22*/
}
