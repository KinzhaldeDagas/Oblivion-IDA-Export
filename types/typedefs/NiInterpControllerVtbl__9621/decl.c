struct NiInterpControllerVtbl
{
NiTimeControllerVtbl super;
UInt16 (__thiscall *GetNumInterpolators)(NiInterpController *);
char *(__thiscall *GetInterpolatorName)(NiInterpController *, UInt16 idx);
UInt16 (__thiscall *GetInterpolatorIdx)(NiInterpController *, char *name);
NiInterpolator *(__thiscall *GetInterpolator)(NiInterpController *, UInt16 idx);
void (__thiscall *SetInterpolator)(NiInterpController *, NiInterpolator *interpolator, UInt16 idx);
void (__thiscall *Unk_22)(NiInterpController *);
char *(__thiscall *GetName)(NiInterpController *);
void (__thiscall *Unk_24)(NiInterpController *, UInt16 idx);
void (__thiscall *Unk_25)(NiInterpController *);
void (__thiscall *Unk_26)(NiInterpController *, UInt16 idx);
void (__thiscall *Unk_27)(NiInterpController *);
void (__thiscall *Unk_28)(NiInterpController *, void *arg, UInt16 idx);
};
