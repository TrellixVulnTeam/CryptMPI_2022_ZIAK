/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPIX_COMM_FAILURE_GET_ACKED = PMPIX_COMM_FAILURE_GET_ACKED
#pragma weak mpix_comm_failure_get_acked__ = PMPIX_COMM_FAILURE_GET_ACKED
#pragma weak mpix_comm_failure_get_acked_ = PMPIX_COMM_FAILURE_GET_ACKED
#pragma weak mpix_comm_failure_get_acked = PMPIX_COMM_FAILURE_GET_ACKED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPIX_COMM_FAILURE_GET_ACKED = pmpix_comm_failure_get_acked__
#pragma weak mpix_comm_failure_get_acked__ = pmpix_comm_failure_get_acked__
#pragma weak mpix_comm_failure_get_acked_ = pmpix_comm_failure_get_acked__
#pragma weak mpix_comm_failure_get_acked = pmpix_comm_failure_get_acked__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPIX_COMM_FAILURE_GET_ACKED = pmpix_comm_failure_get_acked_
#pragma weak mpix_comm_failure_get_acked__ = pmpix_comm_failure_get_acked_
#pragma weak mpix_comm_failure_get_acked_ = pmpix_comm_failure_get_acked_
#pragma weak mpix_comm_failure_get_acked = pmpix_comm_failure_get_acked_
#else
#pragma weak MPIX_COMM_FAILURE_GET_ACKED = pmpix_comm_failure_get_acked
#pragma weak mpix_comm_failure_get_acked__ = pmpix_comm_failure_get_acked
#pragma weak mpix_comm_failure_get_acked_ = pmpix_comm_failure_get_acked
#pragma weak mpix_comm_failure_get_acked = pmpix_comm_failure_get_acked
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPIX_COMM_FAILURE_GET_ACKED = PMPIX_COMM_FAILURE_GET_ACKED
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_failure_get_acked__ = pmpix_comm_failure_get_acked__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_failure_get_acked = pmpix_comm_failure_get_acked
#else
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpix_comm_failure_get_acked_ = pmpix_comm_failure_get_acked_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPIX_COMM_FAILURE_GET_ACKED  MPIX_COMM_FAILURE_GET_ACKED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpix_comm_failure_get_acked__  mpix_comm_failure_get_acked__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpix_comm_failure_get_acked  mpix_comm_failure_get_acked
#else
#pragma _HP_SECONDARY_DEF pmpix_comm_failure_get_acked_  mpix_comm_failure_get_acked_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPIX_COMM_FAILURE_GET_ACKED as PMPIX_COMM_FAILURE_GET_ACKED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpix_comm_failure_get_acked__ as pmpix_comm_failure_get_acked__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpix_comm_failure_get_acked as pmpix_comm_failure_get_acked
#else
#pragma _CRI duplicate mpix_comm_failure_get_acked_ as pmpix_comm_failure_get_acked_
#endif

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_FAILURE_GET_ACKED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_FAILURE_GET_ACKED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_FAILURE_GET_ACKED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_FAILURE_GET_ACKED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked")));

#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(USE_ONLY_MPI_NAMES)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpix_comm_failure_get_acked__ = MPIX_COMM_FAILURE_GET_ACKED
#pragma weak mpix_comm_failure_get_acked_ = MPIX_COMM_FAILURE_GET_ACKED
#pragma weak mpix_comm_failure_get_acked = MPIX_COMM_FAILURE_GET_ACKED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPIX_COMM_FAILURE_GET_ACKED = mpix_comm_failure_get_acked__
#pragma weak mpix_comm_failure_get_acked_ = mpix_comm_failure_get_acked__
#pragma weak mpix_comm_failure_get_acked = mpix_comm_failure_get_acked__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPIX_COMM_FAILURE_GET_ACKED = mpix_comm_failure_get_acked_
#pragma weak mpix_comm_failure_get_acked__ = mpix_comm_failure_get_acked_
#pragma weak mpix_comm_failure_get_acked = mpix_comm_failure_get_acked_
#else
#pragma weak MPIX_COMM_FAILURE_GET_ACKED = mpix_comm_failure_get_acked
#pragma weak mpix_comm_failure_get_acked__ = mpix_comm_failure_get_acked
#pragma weak mpix_comm_failure_get_acked_ = mpix_comm_failure_get_acked
#endif
#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_FAILURE_GET_ACKED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_FAILURE_GET_ACKED")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("MPIX_COMM_FAILURE_GET_ACKED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked__")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked_")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked_")));

#else
extern FORT_DLL_SPEC void FORT_CALL MPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("mpix_comm_failure_get_acked")));
extern FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS)
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpix_comm_failure_get_acked__ = PMPIX_COMM_FAILURE_GET_ACKED
#pragma weak pmpix_comm_failure_get_acked_ = PMPIX_COMM_FAILURE_GET_ACKED
#pragma weak pmpix_comm_failure_get_acked = PMPIX_COMM_FAILURE_GET_ACKED
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPIX_COMM_FAILURE_GET_ACKED = pmpix_comm_failure_get_acked__
#pragma weak pmpix_comm_failure_get_acked_ = pmpix_comm_failure_get_acked__
#pragma weak pmpix_comm_failure_get_acked = pmpix_comm_failure_get_acked__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPIX_COMM_FAILURE_GET_ACKED = pmpix_comm_failure_get_acked_
#pragma weak pmpix_comm_failure_get_acked__ = pmpix_comm_failure_get_acked_
#pragma weak pmpix_comm_failure_get_acked = pmpix_comm_failure_get_acked_
#else
#pragma weak PMPIX_COMM_FAILURE_GET_ACKED = pmpix_comm_failure_get_acked
#pragma weak pmpix_comm_failure_get_acked__ = pmpix_comm_failure_get_acked
#pragma weak pmpix_comm_failure_get_acked_ = pmpix_comm_failure_get_acked
#endif /* Test on name mapping */

#elif defined(HAVE_WEAK_ATTRIBUTE)
#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_FAILURE_GET_ACKED")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_FAILURE_GET_ACKED")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("PMPIX_COMM_FAILURE_GET_ACKED")));

#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked__")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked__")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked__")));

#elif defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked_")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked_")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked_")));

#else
extern FORT_DLL_SPEC void FORT_CALL PMPIX_COMM_FAILURE_GET_ACKED( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked__( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked")));
extern FORT_DLL_SPEC void FORT_CALL pmpix_comm_failure_get_acked_( MPI_Fint *, MPI_Fint *, MPI_Fint * ) __attribute__((weak,alias("pmpix_comm_failure_get_acked")));

#endif /* Test on name mapping */
#endif /* HAVE_MULTIPLE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */

#ifdef F77_NAME_UPPER
#define mpix_comm_failure_get_acked_ PMPIX_COMM_FAILURE_GET_ACKED
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpix_comm_failure_get_acked_ pmpix_comm_failure_get_acked__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpix_comm_failure_get_acked_ pmpix_comm_failure_get_acked
#else
#define mpix_comm_failure_get_acked_ pmpix_comm_failure_get_acked_
#endif /* Test on name mapping */

#ifdef F77_USE_PMPI
/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings. */
#undef MPIX_Comm_failure_get_acked
#define MPIX_Comm_failure_get_acked PMPIX_Comm_failure_get_acked 
#endif

#else

#ifdef F77_NAME_UPPER
#define mpix_comm_failure_get_acked_ MPIX_COMM_FAILURE_GET_ACKED
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpix_comm_failure_get_acked_ mpix_comm_failure_get_acked__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpix_comm_failure_get_acked_ mpix_comm_failure_get_acked
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpix_comm_failure_get_acked_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *ierr ){
    *ierr = MPIX_Comm_failure_get_acked( (MPI_Comm)(*v1), v2 );
}
