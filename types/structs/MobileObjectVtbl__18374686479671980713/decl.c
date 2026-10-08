struct MobileObjectVtbl
{
TESObjectREFRVtbl super;
bool (__thiscall *MoveToLow)(MobileObject *self); ///< Verified: saved-tier switch659C90 and Actor concrete override allocation/registration establish process transition. Prior IsParalyzed label at1A4 was incorrect; boolean result is transition result.
bool (__thiscall *MoveToMiddleLow)(MobileObject *self); ///< Verified: saved-tier switch659C90 and Actor concrete override allocation/registration establish process transition. Prior IsParalyzed label at1A4 was incorrect; boolean result is transition result.
bool (__thiscall *MoveToMiddleHigh)(MobileObject *self); ///< Verified: saved-tier switch659C90 and Actor concrete override allocation/registration establish process transition. Prior IsParalyzed label at1A4 was incorrect; boolean result is transition result.
void (__thiscall *Move)(MobileObject *this, float arg0, float *pos, UInt32 arg2);
void (__thiscall *Jump)(MobileObject *this);
void (__thiscall *Unk_6F)(MobileObject *this, UInt32 unk);
void (__thiscall *Unk_70)(MobileObject *this);
void (__thiscall *Unk_71)(MobileObject *this);
void (__thiscall *Unk_72)(MobileObject *this);
void (__thiscall *Unk_73)(MobileObject *this);
void (__thiscall *Unk_74)(MobileObject *this);
void (__thiscall *Unk_75)(MobileObject *this);
void (__thiscall *Unk_76)(MobileObject *this);
void (__thiscall *Unk_77)(MobileObject *this);
float (__thiscall *GetZRotation)(MobileObject *this);
void (__thiscall *Unk_79)(MobileObject *this);
void (__thiscall *Unk_7A)(MobileObject *this);
void (__thiscall *Unk_7B)(MobileObject *this);
void (__thiscall *Unk_7C)(MobileObject *this);
float (__thiscall *GetJumpScale)(MobileObject *this);
bool (__thiscall *IsDead)(MobileObject *this);
void (__thiscall *Unk_7F)(MobileObject *this);
void (__thiscall *Unk_80)(MobileObject *this);
};
