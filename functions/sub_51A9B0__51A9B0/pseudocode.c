// CustomAnimSupport decode: encoded anim key = group_id | (weapon_modifier << 8) | (movement_prefix << 12).
int __cdecl AnimKey_Make(int a1, int a2, int a3)
{
  return a3 + ((a2 + 0x10 * a1) << 8); /*0x51a9c2*/
}
