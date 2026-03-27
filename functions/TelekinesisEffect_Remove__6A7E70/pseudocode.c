double __usercall TelekinesisEffect_Remove@<st0>(float *this@<ecx>, double a2@<st0>, int a3, float a4)
{
  sub_6A7830(this);
  sub_678E70(
    (int *)&ActorProcessManager_ptr,
    *((_DWORD *)this + 0x12),
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 0x1C) + 0x78));
  return ValueModifierEffect_Remove(a2);
}
