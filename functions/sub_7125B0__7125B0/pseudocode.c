// Fog decode: generic NIF property factory unregister helper; shutdown uses it to unregister "NiFogProperty".
char __cdecl sub_7125B0(int a1)
{
  return NiTMap_RemoveAt((_DWORD *)LODWORD(MEMORY[0xB3F9B0][0x74]), a1); /*0x7125c0*/
}
