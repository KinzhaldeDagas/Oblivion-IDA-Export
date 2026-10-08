struct BSExtraDataVtbl
{
void (__thiscall *Destructor)(BSExtraData *this);
bool (__thiscall *CompareTo)(BSExtraData *this, BSExtraData *other);
};
