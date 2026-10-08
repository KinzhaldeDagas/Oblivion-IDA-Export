struct TESRegionDataVtable
{
void *scalarDeletingDestructor; ///< Verified scalar deleting destructor.
void *saveRegionDataHeader; ///< Verified writes RDAT chunk header containing virtual data ID, override flag and priority.
void *loadRegionDataHeader; ///< Verified loads override flag and priority from RDAT header.
void *unknown0C; ///< Verified derived data-type getter: manager filters compare this return value to 2..7.
void *unknown10; ///< Candidate remaining virtual is copy/snapshot operation; not applied without usage tracing.
void *unknown14; ///< Unknown virtual.
void *unknown18; ///< Unknown virtual.
void *unknown1C; ///< Unknown virtual.
};
