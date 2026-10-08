// NiSingleInterpController link slot delegates to NiTimeController link processing. Concrete legacy controllers may perform additional versioned link migration after this returns.
// attributes: thunk
int __thiscall NiSingleInterpController_LinkObject(_DWORD *this, _DWORD *a2)
{
  return j_NiTimeController_LinkObject(this, a2);
}
