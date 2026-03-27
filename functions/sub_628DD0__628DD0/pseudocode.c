const char *__thiscall sub_628DD0(void *this)
{
  const char *result; // eax

  switch ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x4D0))(this) )
  {
    case 0:
      result = "DEFAULT";
      break;
    case 1:
      result = "ACTION";
      break;
    case 2:
      result = "SCRIPT";
      break;
    case 3:
      result = "COMBAT";
      break;
    case 4:
      result = "DIALOG";
      break;
    default:
      JUMPOUT(0x628E04);
  }
  return result;
}
