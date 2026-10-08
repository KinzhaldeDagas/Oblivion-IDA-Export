struct NiTimeControllerVtbl
{
NiObjectVtbl super;
void (__thiscall *Activate)(NiTimeController *this, float applicationTime); ///< Set Active bit 3 and initialize application/start time state from the supplied float time.
void (__thiscall *Deactivate)(NiTimeController *this); ///< Clear Active bit 3 and invalidate application/start time state.
void (__thiscall *Update)(NiTimeController *, float time);
void (__thiscall *SetTarget)(NiTimeController *, NiObjectNET *node);
bool (__thiscall *Unk_17)(NiTimeController *);
bool (__thiscall *Unk_18)(NiTimeController *);
float (__thiscall *ComputeScaledTime)(NiTimeController *this, float applicationTime); ///< Compute and return controller-local time from the supplied application time; NiTimeController_IsUpdateUnchanged caches this float at +0x28.
bool (__thiscall *Unk_1A)(NiTimeController *);
bool (__thiscall *Unk_1B)(NiTimeController *);
bool (__thiscall *Unk_1C)(NiTimeController *);
};
