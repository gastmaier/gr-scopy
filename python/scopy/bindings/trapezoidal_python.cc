/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(trapezoidal.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(1b01792da9f3ef3e28e7e7f797394bb6)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/scopy/trapezoidal.h>
// pydoc.h is automatically generated in the build directory
#include <trapezoidal_pydoc.h>

void bind_trapezoidal(py::module& m)
{

    using trapezoidal    = gr::scopy::trapezoidal;


    py::class_<trapezoidal, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<trapezoidal>>(m, "trapezoidal", D(trapezoidal))

        .def(py::init(&trapezoidal::make),
           D(trapezoidal,make)
        )
        



        ;




}








